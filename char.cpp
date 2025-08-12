#include <stdio.h>
#include <string.h>
int main(void){
	float a,b;
	printf("小数1=");
	scanf("%f",&a);
	printf("小数2=");
	scanf("%f",&b);
	char c[10];
	
	memcpy(c,&a,5);
	memcpy(c+5,&b,5);
	
	float a_new,b_new;
	memcpy(&a_new,c,5);
	memcpy(&b_new,c+5,5);
	
	printf("小数1为%.4f,小数2为%.4f",a_new,b_new);
	return 0;
} 
