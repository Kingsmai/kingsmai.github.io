/*
    Name: 循环实验4-3b 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 12:02:57 AM
    Description: 输入6个数，求平均值。
    	此题用 while 循环 
*/
#include<stdio.h>
int main()
{
	int i=1,digit;
	float avg;
	while (i<=6)
	{
		printf("请输入第 %d 个数值：",i);
		scanf("%d",&digit);
		avg=avg+digit;
		i=i+1;
	}
	avg=avg/6;
	printf("6个数值的平均值为：%f",avg);
	return 0;
}
