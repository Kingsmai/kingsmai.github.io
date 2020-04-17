#include <stdio.h>
int main ()
{
	float a,b,x;
	printf("a x + b = 0 一元一次懒人计算器\n");
	printf("输入 a：");
	scanf("%f",&a);
	printf("输入 b：");
	scanf("%f",&b);
	if (b!=0)
	{
		x=-b/a;
		printf("x 的值为 %.3f。",x);
		
	}
	else
	{
		printf("err：无法计算出正确的值（b 值不能为 0）");
	}
	return 0;
}
