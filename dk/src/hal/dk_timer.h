#ifndef  DK_TIMER_H
#define  DK_TIMER_H

typedef void (*HalTimer_Fun)();
void  HalTimer1Start();
void  HalTimer1Reset();
void  HalTimer1Stop();
void  HalTimer1Init(int cnt);
void  HalTimer1CallBack(HalTimer_Fun Fun);

#endif
