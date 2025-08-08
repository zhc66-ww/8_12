#include <stdio.h>
int main(void){
	float a,b;
	printf("小数1=");
	scanf("%f",&a);
	printf("小数2=");
	scanf("%f",&b);
	char c[10];
	
	*(float*)(c)=a;
	*(float*)(c+5)=b;
	
	float a_new=*(float*)(c);
	float b_new=*(float*)(c+5);
	
	printf("小数1为%.4f,小数2为%.4f",a_new,b_new);
	
	return 0;
}
