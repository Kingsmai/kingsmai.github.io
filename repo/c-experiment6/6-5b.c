/*
    Name: 循环实验 6-5b 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-24 9:49:54 PM
    Description: 打印出杨辉三角的前12行数据，格式为下三角样式
*/
#include<stdio.h>
#define N 12						//0行0列不用，所以+1
int main()
{
	int pascal[N][N],i,j;			//定义杨辉三角的级数
	pascal[0][0]=1;					//第一个1 
	pascal[1][0]=pascal[1][1]=1;	//第一列与对角线的的元素为 1
	for(i=2;i<12;i++)				//所有数赋值 
	{
		pascal[i][0]=pascal[i][i]=1;
		for(j=1;j<i;j++)
			pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1]; 
	}
	for(i=11;i>=0;i--)				//输出 
	{
		for(j=0;j<(12-i)*2;j++)		//空格输出 
			printf(" ");
		for(j=0;j<=i;j++)			//杨辉三角数输出 
			printf("%4d",pascal[i][j]);
		printf("\n");
			
	}
	return 0;
}

