#include <stdint.h>
#include <time.h>
#include "fos_scheduler.h"

extern uint16_t task1_delay;
extern uint16_t task2_delay;
extern uint16_t task3_delay;
extern uint16_t task4_delay;

extern uint8_t task1_priority;
extern uint8_t task2_priority;
extern uint8_t task3_priority;
extern uint8_t task4_priority;


void Start_fOS_scheduler(void){


    loop1: while(!task1_priority){

        task1_priority += 3;
        task2_priority--;
        task3_priority--;
        task4_priority--;

        Task1_fOS_Loop();
        fOS_delay(task1_delay);

        if(!task2_priority){
            goto loop2;
        }
        else if(!task3_priority){
            goto loop3;
        }
        else if(!task4_priority){
            goto loop4;
        }
    }

    loop2: while(!task2_priority){

        task2_priority += 3;
        task1_priority--;
        task3_priority--;
        task4_priority--;

        Task2_fOS_Loop();
        fOS_delay(task2_delay);

        if(!task1_priority){
            goto loop1;
        }
        else if(!task3_priority){
            goto loop3;
        }
        else if(!task4_priority){
            goto loop4;
        }
    }

    loop3: while(!task3_priority){

        task3_priority += 3;
        task1_priority--;
        task2_priority--;
        task4_priority--;

        Task3_fOS_Loop();
        fOS_delay(task3_delay);

        if(!task1_priority){
            goto loop1;
        }
        else if(!task2_priority){
            goto loop2;
        }
        else if(!task4_priority){
            goto loop4;
        }
    }

    loop4: while(!task4_priority){

        task4_priority += 3;
        task1_priority--;
        task2_priority--;
        task3_priority--;

        Task4_fOS_Loop();
        fOS_delay(task4_delay);
        
        if(!task1_priority){
            goto loop1;
        }
        else if(!task2_priority){
            goto loop2;
        }
        else if(!task3_priority){
            goto loop3;
        }
    }

}

void fOS_delay(uint16_t millis){

    clock_t starttime = clock();

    while(clock() < starttime + millis);
}