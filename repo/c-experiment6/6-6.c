/*
    Name: 数组实验 6-6 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-23 12:46:49 AM
    Description: 输入一个3*3的矩阵，对其转置后输出
*/
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;		//a为3*3的矩阵 
	for(i=0;i<3;i++)		//输入处理 
		for(j=0;j<3;j++)
		{
			printf("请输入[%d][%d]的值：",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("\n");
	printf("转置前：\n");
	for(i=0;i<3;i++)		//输出处理 
	{
		for(j=0;j<3;j++)
			printf("%-4d",a[i][j]);
		printf("\n");		//输出三个之后换行 
	}
	for(i=0;i<3;i++)		//转置处理 
		for(j=0;j<3;j++)
			b[i][j]=a[j][i];
	printf("\n");
	printf("转置后：\n");
	for(i=0;i<3;i++)		//输出处理 
	{
		for(j=0;j<3;j++)
			printf("%-4d",b[i][j]);
		printf("\n");		//输出三个之后换行 
	}
	return 0;
}

