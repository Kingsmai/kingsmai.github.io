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
	float a,b,t;
	char calc;
	printf("请输入需要运算的双目公式：");
	scanf("%f%c%f",&a,&calc,&b);
	switch(calc)
	{
		case'+':
			t=(a+b);
			break;
		case'-':
			t=(a-b);
			break;
		case'*':
			t=(a*b);
			break;
		case'/':
			if (b==0)
				{printf("被除数不能为 0 ,计算错误！");}
			else
				t=(a/b);
			break;
		default: printf("error input!"); 
	}
	printf("%f %c %f = %f",a,calc,b,t);
	return 0;
}
