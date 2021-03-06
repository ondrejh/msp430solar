#ifndef __POUT_H__
#define __POUT_H__


// initialize power ouput
void pout_init(void);

// set power output status (on/off)
typedef enum {ON, OFF, AUTO} t_setstatus;
void pout_set(t_setstatus state);

void prog_init(void);
bool prog_test(tstruct t);
bool temp_test(int16_t tpool, int16_t tpanel);

#endif
