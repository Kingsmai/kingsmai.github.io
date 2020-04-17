/*
    Name: 循环实验4-3b 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-09 7:35:19 AM
    Description: 输入6个数，求平均值。
    	此题用 do-while 循环 
*/
#include<stdio.h>
int main()
{
	int i=0,digit;
	float avg;
	do
	{
		i=i+1;
		printf("请输入第 %d 个数值：",i);
		scanf("%d",&digit);
		avg=avg+digit;
	}
	avg=avg/6;
	printf("6个数值的平均值为：%f",avg);
	return 0;
}
