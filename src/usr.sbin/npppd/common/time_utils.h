/* $Id$ */
#ifndef TIME_UTIL_H
#define	TIME_UTIL_H	1


#define	get_monosec()		((time_t)(get_nanotime() / 1000000000LL))

#ifdef __cplusplus
extern "C" {
#endif

int64_t  get_nanotime (void);


#ifdef __cplusplus
}
#endif

#endif
