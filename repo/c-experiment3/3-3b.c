/*
    Name:
    Copyright:
    Author:Xiaomai
    Date: 10/31/2019 1:01:14 PM
    Description:
*/

#include<stdio.h>
main ()
{
	char func;
	float a,b,t;
	printf("请输入第一个数值：");
	scanf("%f",&a);
	getchar();
	printf("请输入要执行的操作(+, -, *, /): ");
	scanf("%c",&func);
	getchar();
	printf("请输入第二个数值：");
	scanf("%f",&b);
	getchar();
	if (func=='+')
	{
		t=(a+b); 
	}
	if (func=='-')
	{
		t=(a-b);
	}
	if (func=='*')
	{
		t=(a*b);
	}
	if (func=='/')
	{
		if (b==0)
			printf{"被除数不能为0");
		else
			t=(a/b);
	}
	printf("计算结果为：%f",t);
	return 0;
}
