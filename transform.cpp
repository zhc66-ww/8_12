#include <stdio.h>
#include <stdint.h>
//大小端转化 
int transform(int value) {
    return ((value & 0x000000FF) << 24) |  // 低字节移到高位
           ((value & 0x0000FF00) << 8)  |  // 次低字节移到次高位
           ((value & 0x00FF0000) >> 8)  |  // 次高字节移到次低位
           ((value & 0xFF000000) >> 24);   // 高字节移到低位
}
int main(void){
	int a=0x12253647;
	//本机内存 
	char *p=(char*)&a;
	printf("本机内存字节: ");
	int i;
	for(i=0;i<4;i++)
	  printf("%02x ",p[i]);
	printf("\n"); 
	//大端模式 
	printf("大端模式下的字节: ");
    printf("%02x %02x %02x %02x\n",(a & 0x000000FF),(a & 0x0000FF00) >> 8,(a & 0x00FF0000) >> 16,(a & 0xFF000000) >> 24);
    //小端模式 
    printf("小端模式下的字节: ");
    printf("%02x %02x %02x %02x\n",(a & 0xFF000000) >> 24,(a & 0x00FF0000) >> 16,(a & 0x0000FF00) >> 8,(a & 0x000000FF));
    
	return 0;
} 
