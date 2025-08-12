#include <stdio.h>
#include <string.h>
int main(void){
	float a=59.622;
	float b=92.6327;
	char c[4];
	//因为a×1000,b×100后数值较大，所以要用范围为（0,65535）的unsigned short 
	unsigned short ua=(short)(a*1000);
	unsigned short ub=(short)(b*100);
	//用memcpy函数进行复制 
	memcpy(c,&ua,2);
	memcpy(c+2,&ub,2);
	
	unsigned short ta,tb;
	//用memcpy函数进行提取 
	memcpy(&ta,c,2);
	memcpy(&tb,c+2,2);
	//提取后要将ta,tb还原到原来的大小，但是精度有限，b的精度只能是0.01 
	float fa=(float)(ta*0.001); 
	float fb=(float)(tb*0.01);
	
	printf("存入%f %f\n",a,b);
	printf("提取%f %f\n",fa,fb);
	
	return 0;
}
