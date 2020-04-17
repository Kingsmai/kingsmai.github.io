/*
    Name: 循环实验4-3a
    Copyright:
    Author: Xiaomai
    Date: 2019-11-08 11:48:16 PM
    Description: 输入6个数，求平均值。
    	此题用 for 循环 
*/
#include<stdio.h>
int main()
{
	int digit,i;
	float avg=0.0;
	for (i=1;i<=6;i++)
	{
		printf("请输入第 %d 个数：",i);
		scanf("%d",&digit);
		avg=avg+digit;
	}
	avg=avg/6;
	printf("六个数值的平均值为：%f",avg);
	return 0;
} 
