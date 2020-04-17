/*
    Name: 数组实验 6-5 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-22 5:30:49 PM
    Description: 打印出杨辉三角的前12行数据，格式为下三角样式
*/
#include<stdio.h>
#define N 13	//0行0列不用，所以+1 
int main()
{
	int pascal[N][N],i,j;
	for(i=1;i<N;i++)
	{
		pascal[i][1]=pascal[i][i]=1;	//第一列与对角线的的元素为 1
		for(j=2;j<=i-1;j++)				//从每行的第二个元素开始 
		{
			pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];	//计算每个元素的值
		}
	}
	for(i=1;i<N;i++)
	{
		for(j=1;j<=i;j++)				//每一行只要计算到对角线元素即可
			printf("%4d",pascal[i][j]);	//利用 %4d 的格式控制输出的数据对其
		printf("\n");
	}
	return 0;
}

