#include <stdio.h>
#include <stdint.h>
#include "fos_scheduler.h"

uint16_t task1_delay = 500;
uint16_t task2_delay = 500;
uint16_t task3_delay = 500;
uint16_t task4_delay = 500;

uint8_t task1_priority = 0;
uint8_t task2_priority = 1;
uint8_t task3_priority = 2;
uint8_t task4_priority = 3;


int main(){

    Start_fOS_scheduler();

    return 0;
}

void Task1_fOS_Loop(void){

    printf("Hi, I am in Task1\n");
}

void Task2_fOS_Loop(void){

    printf("Hello, I am in Task2\n");
}

void Task3_fOS_Loop(void){

    printf("Hey, I am in Task3\n");
}

void Task4_fOS_Loop(void){

    printf("Hola, I am in Task4\n");
}


