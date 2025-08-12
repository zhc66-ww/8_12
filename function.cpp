#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct {    
    float x,y,z;
}vector3f;

vector3f add(vector3f a,vector3f b){
	vector3f r={a.x+b.x,a.y+b.y,a.z+b.z};
	return r;
}

vector3f minus(vector3f a,vector3f b){
	vector3f r={a.x-b.x,a.y-b.y,a.z-b.z};
	return r;
}

float diancheng(vector3f a,vector3f b){
	float r;
	r=a.x*b.x+a.y*b.y+a.z*b.z;
	return r;
}

vector3f danweihua(vector3f a){
	float t;
	t=sqrt(a.x*a.x+a.y*a.y+a.z*a.z);
	vector3f r={a.x/t,a.y/t,a.z/t};
	return r;
}

float qvmo(vector3f a){
	float r;
	r=sqrt(a.x*a.x+a.y*a.y+a.z*a.z);
	return r;
}

vector3f chacheng(vector3f a,vector3f b){
	vector3f r={a.y*b.z-a.z*b.y,a.z*b.x-a.x*b.z,a.x*b.y-a.y*b.x};
	return r;
}

int main(void){
	
	vector3f A={1,0,1};
	vector3f B={1,1,1};
	vector3f C1={0,1,0};
	
	vector3f AB=minus(B,A);
	vector3f AC1=minus(C1,A);
	
	float d;
	d=qvmo(chacheng(AB,AC1))/qvmo(AC1);
	printf("点B到直线AC1的距离为%f\n",d);
	
	vector3f C={0,1,1};
	vector3f E={1,0.5,0};
	vector3f F={1,0.5,1};
	
	vector3f AF=minus(A,F);
	vector3f AE=minus(E,A);
	
	vector3f n=chacheng(AC1,AE);
	
	float h;
	h=diancheng(AF,n)/qvmo(n);
	printf("直线FC到平面AEC1的距离为%f\n",h);
	
	return 0;
}
