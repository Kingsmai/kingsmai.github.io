/*
    Name:网费计算器 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-01 11:48:22 PM
    Description:编一个程序输入上网的时间并计算上网费用。 
*/

#include<stdio.h>
int main()
{
	int hour;
	float fee;
	printf("请输入时间（小时）：");
	scanf("%d",&hour);
	if (hour<=10)
	{
		fee=30;
	}
	if (hour>10&&hour<=50)
	{
		fee=(30+((hour-10)*2.5));
	}
	if (hour>50)
	{
		fee=(hour*2);
	}
	if (fee>120)
	{
		printf("网费为 ￥120。");
	}
	else
	{
		printf("网费为 ￥%f。",fee);
	}
	return 0;
} 
