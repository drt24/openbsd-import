/*
 * $Id$
 */

extern void VjInit(int);
extern void SendPppFrame(struct mbuf *);
extern struct mbuf *VjCompInput(struct mbuf *, int);
extern const char *vj2asc(u_long);
