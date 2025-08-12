#include <stdio.h>
int main(void){
	float a,b;
	printf("小数1=");
	scanf("%f",&a);
	printf("小数2=");
	scanf("%f",&b);
	char c[10];
	
	snprintf(c,5,"%.4f",a);
	snprintf(c+5,5,"%.4f",b);
	
	float a_new,b_new;
	sscanf(c,"%f",&a_new);
	sscanf(c+5,"%f",&b_new);
	
	printf("小数1为%.4f,小数2为%.4f",a_new,b_new);
	return 0;
}
