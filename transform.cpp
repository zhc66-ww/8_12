#include <stdio.h>
#include <stdint.h>
//��С��ת�� 
int transform(int value) {
    return ((value & 0x000000FF) << 24) |  // ���ֽ��Ƶ���λ
           ((value & 0x0000FF00) << 8)  |  // �ε��ֽ��Ƶ��θ�λ
           ((value & 0x00FF0000) >> 8)  |  // �θ��ֽ��Ƶ��ε�λ
           ((value & 0xFF000000) >> 24);   // ���ֽ��Ƶ���λ
}
int main(void){
	int a=0x12253647;
	//�����ڴ� 
	char *p=(char*)&a;
	printf("�����ڴ��ֽ�: ");
	int i;
	for(i=0;i<4;i++)
	  printf("%02x ",p[i]);
	printf("\n"); 
	//���ģʽ 
	printf("���ģʽ�µ��ֽ�: ");
    printf("%02x %02x %02x %02x\n",(a & 0x000000FF),(a & 0x0000FF00) >> 8,(a & 0x00FF0000) >> 16,(a & 0xFF000000) >> 24);
    //С��ģʽ 
    printf("С��ģʽ�µ��ֽ�: ");
    printf("%02x %02x %02x %02x\n",(a & 0xFF000000) >> 24,(a & 0x00FF0000) >> 16,(a & 0x0000FF00) >> 8,(a & 0x000000FF));
    
	return 0;
} 
