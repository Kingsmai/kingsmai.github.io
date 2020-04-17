/*
    Name:
    Copyright:
    Author: Xiaomai
    Date: 2019-12-05 1:22:44 PM
    Description: 编写函数打印以下图形，
		将图形中的行数作为函数的形参。
		在main()函数中输入行数n，
		调用该函数打印行数为n的图形。
		（如：输入5，则打印出5行的三角形）
*/
#include<stdio.h>
void prtstar(int row);	//声明函数 
int main()
{
	int n;		//定义行数变量
	printf("Please input row number: ");
	scanf("%d",&n);
	prtstar(n); 
	return 0;
}
void prtstar(int row)
{
	int i,j;
	for (i=1;i<=row;i++)	//控制输出多少行 
	{
		for (j=1;j<=i;j++)	//控制每行输出多少 * 
			printf("*");
		printf("\n");
	} 
}
