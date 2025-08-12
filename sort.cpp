#include <stdio.h>
#include <stdlib.h>
//定义一个新函数，因为fa-fb可能小于1，所以不能强制转换变量，只能用return 
int compare_int(const void *a, const void *b){
	float fa=*(const float *)a;
	float fb=*(const float *)b;
	if(fa<fb) return -1;
	else if(fa>fb) return 1;
	else return 0;
}

int main(void){
	float numbers[]={88,10.3,3.14,2.71,66};
	//n为数组内元素个数 
	size_t n=sizeof(numbers)/sizeof(numbers[0]);
	
	printf("排序前的数组：\n");
	for(size_t i=0;i<n;i++)
	  printf("%.2f ",numbers[i]);
	//用qsort函数进行排序 
	qsort(numbers,n,sizeof(numbers[0]),compare_int);
	printf("排序后的数组：\n");
	for(size_t i=0;i<n;i++)
	  printf("%.2f ",numbers[i]);
	
	return 0;
} 
