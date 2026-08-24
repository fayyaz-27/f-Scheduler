#ifndef FOS_SCHEDULER_H
#define FOS_SCHEDULER_H

#include <stdint.h>

void Start_fOS_scheduler(void);

void Task1_fOS_Loop(void);

void Task2_fOS_Loop(void);

void Task3_fOS_Loop(void);

void Task4_fOS_Loop(void);

void fOS_delay(uint16_t millis);

#endif