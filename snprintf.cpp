#include <stdio.h>
int main(void){
	float a,b;
	printf("С��1=");
	scanf("%f",&a);
	printf("С��2=");
	scanf("%f",&b);
	char c[10];
	
	snprintf(c,5,"%.4f",a);
	snprintf(c+5,5,"%.4f",b);
	
	float a_new,b_new;
	sscanf(c,"%f",&a_new);
	sscanf(c+5,"%f",&b_new);
	
	printf("С��1Ϊ%.4f,С��2Ϊ%.4f",a_new,b_new);
	return 0;
}
