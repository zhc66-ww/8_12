#include <stdio.h>
#include <stdlib.h>
//����һ���º�������Ϊfa-fb����С��1�����Բ���ǿ��ת��������ֻ����return 
int compare_int(const void *a, const void *b){
	float fa=*(const float *)a;
	float fb=*(const float *)b;
	if(fa<fb) return -1;
	else if(fa>fb) return 1;
	else return 0;
}

int main(void){
	float numbers[]={88,10.3,3.14,2.71,66};
	//nΪ������Ԫ�ظ��� 
	size_t n=sizeof(numbers)/sizeof(numbers[0]);
	
	printf("����ǰ�����飺\n");
	for(size_t i=0;i<n;i++)
	  printf("%.2f ",numbers[i]);
	//��qsort������������ 
	qsort(numbers,n,sizeof(numbers[0]),compare_int);
	printf("���������飺\n");
	for(size_t i=0;i<n;i++)
	  printf("%.2f ",numbers[i]);
	
	return 0;
} 
