#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"
#include "stack.h"

#define size_stack 50 

int main(void)
{
    stack s;
    Stack_Init(&s,size_stack);
    float num[5]={3.14,2.273,78,10.3,6.66};
    float result[5];
    int i,j;
    for(i=0;i<5;i++)
    	STACK_PUSH(&s,&num[i],sizeof(float));
    for(j=4;j>=0;j--){
    	STACK_POP(&s,&result[j],sizeof(float));
    	printf("%.3f ",result[j]);
	}	
    return 0;
}
