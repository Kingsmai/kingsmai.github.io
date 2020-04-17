/*
    Name:
    Copyright:
    Author: Xiaomai
    Date: 2019-12-08 1:31:27 PM
    Description: 编写函数求解一元二次方程ax2+bx+c=0的解。 
		并作为函数值返回。 
		系数a,b,c从键盘输入作为函数的形式参数。 
*/
#include <stdio.h>
#include <math.h>
double solve1(double x,double y,double z);
double solve2(double x,double y,double z);
int main()
{
	double a,b,c,disc,x1,x2;
	printf("aX^2+bX+c=0\n");
	printf("Please input (a b c): ");
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0)
		printf("No real root.\n");
	else
	{
		x1=solve1(a,b,c);
		x2=solve2(a,b,c);
		printf("solve x1= %lf\n",x1);
		printf("solve x2= %lf\n",x2);
	}
}
double solve1(double x,double y,double z)
{
	double x1,disc;
	disc=sqrt(y*y-4*x*z);
	x1=(-y+disc)/(2*x);
	return x1;
}
double solve2(double x,double y,double z)
{
	double x2,disc;
	disc=sqrt(y*y-4*x*z);
	x2=(-y-disc)/(2*x);
	return x2;
}
