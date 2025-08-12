#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <math.h>
int main(void) {
    int a[32];          // 数组存放随机数
    srand(time(NULL));  // 随机生成 
    // 存入数组
    int b;
    for (b=0;b<32;b++) 
        a[b]=rand()%101; 
        
    int i;
    uint32_t m=0;
	for(i=0;i<32;i++) {
		if(a[i]>50)
		  m|=(1u<<i);
	}
	printf("该整数为%u\n",m);
	printf("二进制为");
	for(i=31;i>=0;i--)
	  printf("%d",(m>>i)&1); 
	return 0;
}

