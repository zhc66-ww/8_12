#include "queue.h"

void Queue_Init(queue *q)
{
    q->front=q->rear=0;
    int i;
    for(i=0;i<QUEUE_NUM;i++)
       q->data[i]=0;
}
bool QUEUE_EMPTY(queue *q)
{
    return (q->front==q->rear);
}
bool QUEUE_FULL(queue *q)
{
    //return ((q->rear-q->front)>=QUEUE_NUM);  //���������ַ�������ѭ�������е� rear ���������ĩβʱ��������Ƶ�����Ŀ�ͷ�����Բ��������ַ����������ŵ�Ԫ�ظ��� 
    return (((q->rear+1)%QUEUE_NUM)==q->front);
}
bool QUEUE_ENQUEUE(queue *q,int value)
{
    if(QUEUE_FULL(q))
        return 0;
    q->data[q->rear]=value;
    q->rear=(q->rear+1)%QUEUE_NUM;
    return 1;
}
bool QUEUE_DEQUEUE(queue *q,int *value)
{
    if(QUEUE_EMPTY(q))
        return 0;
    *value=q->data[q->front];
    q->front=(q->front+1)%QUEUE_NUM;
    return 1;
}

