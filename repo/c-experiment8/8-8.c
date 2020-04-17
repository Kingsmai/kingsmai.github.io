/*
    Name: 函数实验 8-8 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-05 11:28:25 AM
    Description: 利用函数调用求两整数的最大公约数和最小公倍数
*/
#include<stdio.h>
int hcf(int a,int b)	//穷举法 
{
	int i=1;
	for (i=a;i>0;i--)
		if ((a%i == 0)&&(b%i == 0))
			break;
	return i;
}
int lcm(int a,int b)	//穷举法 
{
	int i=0;
	for (i=a;;i++)
		if ((i%a == 0)&&(i%b == 0))
			break;
	return i;
}
int main()
{
	int a;int b;
	printf("Please input 2 interger value: ");
	scanf("%d%d",&a,&b);
	printf("H.C.F is: %d\n",hcf(a,b));	//调用函数 hcf 
	printf("L.C.M is: %d\n",lcm(a,b));	//调用函数 lcm 
	return 0;
}
