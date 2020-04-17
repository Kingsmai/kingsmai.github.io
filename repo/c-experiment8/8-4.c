/*
    Name: 函数实验 8-4 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-05 12:33:29 AM
    Description: 在主函数中输入两个实数
		在该程序中用四个子函数实现
		求这两个数据的和、差、积、商，
		并在主函数中将计算结果输出。
*/
#include<stdio.h>
float add(float a,float b);	//声明加函数 
float sub(float a,float b);	//声明减函数 
float mul(float a,float b);	//声明乘函数 
float div(float a,float b);	//声明除函数 
float sum;	//定义全局变量 sum 
int main()
{
	float a,b;		//定义两个实数值
	printf("Please input two float number: ");
	scanf("%f%f",&a,&b);
	printf("%f + %f = %f\n",a,b,add(a,b));
	printf("%f - %f = %f\n",a,b,sub(a,b));
	printf("%f * %f = %f\n",a,b,mul(a,b));
	printf("%f / %f = %f\n",a,b,div(a,b));
	return 0;
}
float add(float a,float b)
{
	sum=a+b;
	return sum;
}
float sub(float a,float b)
{
	sum=a-b;
	return sum;
}
float mul(float a,float b)
{
	sum=a*b;
	return sum; 
}
float div(float a,float b)
{
	if (b!=0)
	{
		sum=a/b;
		return sum;
	}
	else
		printf("Divisor cannot be 0!");
}
