/*
    Name:快递重量价格计算器 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-02 5:23:00 PM
    Description:
    	某快递公司的快递费用规定如下：
			货物重量小于等于1kg，快递费用为10元
			货物重量大于1kg且小于等于10kg，快递费用为13元/kg
			货物重量大于10kg且小于等于50kg，快递费用为12元/kg
			货物重量大于50kg，快递费用为11元/kg
		请根据以上规则，设计一个程序，输入重量后计算应交的快递费用。

*/

#include<stdio.h>
int main()
{
	float weight,price;
	int opt=1;
	printf("请输入包裹重量（kg）：");
	scanf("%f",&weight);
	if (weight>0&&weight<=1)
	{
		price=10;
	}
	else if (weight>1&&weight<=10)
	{
		price=(weight*13);
	}
	else if (weight>10&&weight<=50)
	{
		price=(weight*12);
	}
	else if (weight>50)
	{
		price=(weight*11);
	}
	else
	{
		opt=0;
		printf("包裹重量不能小于 0。");
	}
	if (opt!=0)
	{
		printf("%d公斤，应付%.2f元。",weight,price);
	}
	return 0; 
}
