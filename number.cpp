#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <math.h>
int main(void) {
    int a[32];          // �����������
    srand(time(NULL));  // ������� 
    // ��������
    int b;
    for (b=0;b<32;b++) 
        a[b]=rand()%101; 
        
    int i;
    uint32_t m=0;
	for(i=0;i<32;i++) {
		if(a[i]>50)
		  m|=(1u<<i);
	}
	printf("������Ϊ%u\n",m);
	printf("������Ϊ");
	for(i=31;i>=0;i--)
	  printf("%d",(m>>i)&1); 
	return 0;
}

