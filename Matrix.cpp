#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct MParam{
    uint8_t row;
    uint8_t column;
    float **data;
 }*Matrix;
 
 //构建矩阵
Matrix creat_Matrix(uint8_t row,uint8_t column){
	Matrix m=(Matrix)malloc(sizeof(struct MParam));
	m->row=row;
	m->column=column;
	m->data=(float**)malloc(row*sizeof(float*));
	for(int i=0;i<row;i++)
	  m->data[i]=(float*)malloc(column*sizeof(float));
	return m;
}

//释放矩阵空间
void free_Matrix(Matrix m){
	for(uint8_t i=0;i<m->row;i++)
	  free(m->data[i]);
	free(m->data);
	free(m);
}

//输入矩阵
Matrix input_Matrix(Matrix m){
	for(uint8_t i=0;i<m->row;i++){
		for(uint8_t j=0;j<m->column;j++)
			scanf("%f",&m->data[i][j]);
	}
    return m;
}

//转置矩阵
Matrix transpose_Matrix(Matrix m,Matrix t){
	for(uint8_t i=0;i<m->row;i++){
		for(uint8_t j=0;j<m->column;j++)
			t->data[j][i]=m->data[i][j];
    }
    return t;
}

//矩阵乘法运算
Matrix multiply_Matrix(Matrix m,Matrix t,Matrix n){
	for(uint8_t i=0;i<m->row;i++){
		for(uint8_t j=0;j<t->column;j++){
			n->data[i][j]=0;
			for(uint8_t k=0;k<m->column;k++)
				n->data[i][j]+=m->data[i][k]*t->data[k][j];
		}
    } 
    return n;
}

int main(void){
	uint8_t new_row,new_column;
	
	printf("请输入矩阵行数\n");
	scanf("%hhu",&new_row);
	printf("请输入矩阵列数\n");
	scanf("%hhu",&new_column);
	
	printf("请输入矩阵元素\n");
	Matrix m=creat_Matrix(new_row,new_column);
	input_Matrix(m);
	printf("输入矩阵为\n");
	for(uint8_t i=0;i<m->row;i++){
		for(uint8_t j=0;j<m->column;j++)
			printf("%.2f ",m->data[i][j]);
		printf("\n");
    }
	
	printf("转置矩阵\n");
	Matrix t=creat_Matrix(m->column,m->row);
	transpose_Matrix(m,t);
	for(uint8_t i=0;i<t->row;i++){
		for(uint8_t j=0;j<t->column;j++)
			printf("%.2f ",t->data[i][j]);
		printf("\n");
    }
	
	printf("结果\n");
	Matrix n=creat_Matrix(m->row,t->column);
	multiply_Matrix(m,t,n);
	for(uint8_t i=0;i<n->row;i++){
		for(uint8_t j=0;j<n->column;j++)
			printf("%.2f ",n->data[i][j]);
		printf("\n");
    }
	
	free_Matrix(m);
	free_Matrix(t);
	free_Matrix(n);
	return 0;
}
