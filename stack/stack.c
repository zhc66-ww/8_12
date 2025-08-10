#include "stack.h"

void Stack_Init(stack *s,uint32_t sz)
{
    s->base=(char *)malloc(sz*sizeof(char));
    s->top=s->base;
    s->size=sz;
    return;
}
bool STACK_EMPTY(stack *s)
{
    return (s->base==s->top);
}
bool STACK_FULL(stack *s)
{
    return (s->base-s->top>=s->size);
}
bool STACK_PUSH(stack *s,void *value,uint32_t size)
{
    if(STACK_FULL(s))
        return 0;
    s->top-=size;
    memcpy(s->top,value,size);
    return 1;
}
bool STACK_POP(stack *s,void *value,uint32_t size)
{
    if(s->top+size>s->base)
        return 0;
    memcpy(value,s->top,size);
    s->top+=size;
    return 1;
}
bool STACK_FREE(stack *s)
{
    free(s->base);
    s->base=NULL;
    s->top=NULL;
}
