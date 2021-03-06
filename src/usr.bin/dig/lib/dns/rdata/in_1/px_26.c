/*
 * Copyright (C) Internet Systems Consortium, Inc. ("ISC")
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/* $Id$ */

/* Reviewed: Mon Mar 20 10:44:27 PST 2000 */

/* RFC2163 */

#ifndef RDATA_IN_1_PX_26_C
#define RDATA_IN_1_PX_26_C

static inline isc_result_t
totext_in_px(ARGS_TOTEXT) {
	isc_region_t region;
	dns_name_t name;
	dns_name_t prefix;
	isc_boolean_t sub;
	char buf[sizeof("64000")];
	unsigned short num;

	REQUIRE(rdata->type == dns_rdatatype_px);
	REQUIRE(rdata->rdclass == dns_rdataclass_in);
	REQUIRE(rdata->length != 0);

	dns_name_init(&name, NULL);
	dns_name_init(&prefix, NULL);

	/*
	 * Preference.
	 */
	dns_rdata_toregion(rdata, &region);
	num = uint16_fromregion(&region);
	isc_region_consume(&region, 2);
	snprintf(buf, sizeof(buf), "%u", num);
	RETERR(isc_str_tobuffer(buf, target));
	RETERR(isc_str_tobuffer(" ", target));

	/*
	 * MAP822.
	 */
	dns_name_fromregion(&name, &region);
	sub = name_prefix(&name, tctx->origin, &prefix);
	isc_region_consume(&region, name_length(&name));
	RETERR(dns_name_totext(&prefix, sub, target));
	RETERR(isc_str_tobuffer(" ", target));

	/*
	 * MAPX400.
	 */
	dns_name_fromregion(&name, &region);
	sub = name_prefix(&name, tctx->origin, &prefix);
	return(dns_name_totext(&prefix, sub, target));
}

static inline isc_result_t
fromwire_in_px(ARGS_FROMWIRE) {
	dns_name_t name;
	isc_region_t sregion;

	REQUIRE(type == dns_rdatatype_px);
	REQUIRE(rdclass == dns_rdataclass_in);

	UNUSED(type);
	UNUSED(rdclass);

	dns_decompress_setmethods(dctx, DNS_COMPRESS_NONE);

	dns_name_init(&name, NULL);

	/*
	 * Preference.
	 */
	isc_buffer_activeregion(source, &sregion);
	if (sregion.length < 2)
		return (ISC_R_UNEXPECTEDEND);
	RETERR(isc_mem_tobuffer(target, sregion.base, 2));
	isc_buffer_forward(source, 2);

	/*
	 * MAP822.
	 */
	RETERR(dns_name_fromwire(&name, source, dctx, options, target));

	/*
	 * MAPX400.
	 */
	return (dns_name_fromwire(&name, source, dctx, options, target));
}

static inline isc_result_t
towire_in_px(ARGS_TOWIRE) {
	dns_name_t name;
	dns_offsets_t offsets;
	isc_region_t region;

	REQUIRE(rdata->type == dns_rdatatype_px);
	REQUIRE(rdata->rdclass == dns_rdataclass_in);
	REQUIRE(rdata->length != 0);

	dns_compress_setmethods(cctx, DNS_COMPRESS_NONE);
	/*
	 * Preference.
	 */
	dns_rdata_toregion(rdata, &region);
	RETERR(isc_mem_tobuffer(target, region.base, 2));
	isc_region_consume(&region, 2);

	/*
	 * MAP822.
	 */
	dns_name_init(&name, offsets);
	dns_name_fromregion(&name, &region);
	RETERR(dns_name_towire(&name, cctx, target));
	isc_region_consume(&region, name_length(&name));

	/*
	 * MAPX400.
	 */
	dns_name_init(&name, offsets);
	dns_name_fromregion(&name, &region);
	return (dns_name_towire(&name, cctx, target));
}

#endif	/* RDATA_IN_1_PX_26_C */
