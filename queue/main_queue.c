#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"
#include "queue.h"

int main(void)
{
    queue q;
    int num=0;
    int i,j;
    Queue_Init(&q);
    for(i=1;i<=10;i++)
        QUEUE_ENQUEUE(&q,i);
    for(j=1;j<=10;j++)
    {
        QUEUE_DEQUEUE(&q,&num);
        printf("%d ",num);
    }
    return 0;
}
