#ifndef QUEUE_H
#define QUEUE_H

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"

#define QUEUE_NUM 20
typedef struct Queue
{
    int data[QUEUE_NUM];
    uint8_t front;
    uint8_t rear;
}queue;

void Queue_Init(queue *q);
bool QUEUE_EMPTY(queue *q);
bool QUEUE_FULL(queue *q);
bool QUEUE_ENQUEUE(queue *q,int value);
bool QUEUE_DEQUEUE(queue *q,int *value);

#endif 


