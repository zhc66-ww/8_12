#include <stdio.h>
int main(void){
	float a,b;
	printf("С��1=");
	scanf("%f",&a);
	printf("С��2=");
	scanf("%f",&b);
	char c[10];
	
	*(float*)(c)=a;
	*(float*)(c+5)=b;
	
	float a_new=*(float*)(c);
	float b_new=*(float*)(c+5);
	
	printf("С��1Ϊ%.4f,С��2Ϊ%.4f",a_new,b_new);
	
	return 0;
}
