/*
    Name: 函数实验 9-6 
    Copyright:
    Author: Xiaomai
    Date: 2019/12/12 9:26:09
    Description: 用一个函数实现将n ×n的矩阵转置，
		在主函数中调用函数实现矩阵转置，
		并调用函数输出转置后的矩阵
*/
#include<stdio.h>
void shift(int n, int a[50][50]); 
int main()
{
	int i,j,n,a[50][50];
	printf("Please input Matrix row: ");	//输入矩阵行数 
	scanf("%d",&n);
	printf("\n");
	printf("Please input Matrix data:\n");	//输入矩阵数据 
	for(i=0;i<n;i++)		//外循环 
		for(j=0;j<n;j++)	//内循环 
		{
			printf("Data Value [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("\n");
	printf("Base Matrix data are:\n");		//输出原数据 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");		//输出一行就换行 
	}
	printf("\n");
	shift(n,a);		//调用函数进行运算 
	printf("Transposed Matrix data:\n");	//输出转置数据 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");		//输出一行就换行 
	}
	return 0;
}
void shift(int n, int a[50][50])		//函数运算 
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
}
