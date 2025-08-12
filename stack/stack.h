#ifndef STACK_H
#define STACK_H

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"

typedef struct Stack
{
    char *base;  //Õ»µ× 
    char *top;   //Õ»¶¥ 
    int size;

}stack;

void Stack_Init(stack *s,uint32_t sz);
bool STACK_EMPTY(stack *s);
bool STACK_FULL(stack *s);
bool STACK_PUSH(stack *s,void *value,uint32_t size);
bool STACK_POP(stack *s,void *value,uint32_t size);
bool STACK_FREE(stack *s);

#endif
