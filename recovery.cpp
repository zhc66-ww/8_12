#include <stdio.h>
#include <string.h>
int main(void){
	float a=59.622;
	float b=92.6327;
	char c[4];
	//��Ϊa��1000,b��100����ֵ�ϴ�����Ҫ�÷�ΧΪ��0,65535����unsigned short 
	unsigned short ua=(short)(a*1000);
	unsigned short ub=(short)(b*100);
	//��memcpy�������и��� 
	memcpy(c,&ua,2);
	memcpy(c+2,&ub,2);
	
	unsigned short ta,tb;
	//��memcpy����������ȡ 
	memcpy(&ta,c,2);
	memcpy(&tb,c+2,2);
	//��ȡ��Ҫ��ta,tb��ԭ��ԭ���Ĵ�С�����Ǿ������ޣ�b�ľ���ֻ����0.01 
	float fa=(float)(ta*0.001); 
	float fb=(float)(tb*0.01);
	
	printf("����%f %f\n",a,b);
	printf("��ȡ%f %f\n",fa,fb);
	
	return 0;
}
