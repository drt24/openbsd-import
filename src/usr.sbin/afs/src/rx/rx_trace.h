/* $Header$ */

#ifndef	_RX_TRACE
#define _RX_TRACE

#ifndef	RXDEBUG
#define rxi_calltrace(a,b)
#define rxi_flushtrace()
#else
void rxi_calltrace(unsigned int, struct rx_call*);
void rxi_flushtrace(void);

#define RX_CALL_ARRIVAL 0
#define RX_CALL_START 1
#define RX_CALL_END 2
#define RX_TRACE_DROP 3

#endif				       /* RXDEBUG */

#endif				       /* _RX_TRACE */
