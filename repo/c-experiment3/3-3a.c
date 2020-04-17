/*
    Name:简易计算器 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-01 2:56:20 PM
    Description:用了Switch语句 
*/

#include<stdio.h>
int main()
{
	float a,b;
	char calc;
	printf("请输入需要运算的双目公式：");
	scanf("%f%c%f",&a,&calc,&b);
	switch(calc)
	{
		case'+':
			printf("%f + %f = %f",a,b,a+b);
			break;
		case'-':
			printf("%f - %f = %f",a,b,a-b);
			break;
		case'*':
			printf("%f * %f = %f",a,b,a*b);
			break;
		case'/':
			if (b==0)
				printf("被除数不能为 0 ,计算错误！");
			else
				printf("%f / %f = %f",a,b,a/b);
			break;
		default: printf("Error input!");
	}
	return 0;
}
