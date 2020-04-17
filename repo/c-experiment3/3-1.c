/*
    Name:二元一次方程式解答器 
    Copyright:None
    Author:Xiaomai
    Date: 10/31/2019 7:22:20 PM
    Description:
*/

#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,root,p,q,x1,x2;
	printf("ax2+bx+c=0 (a不能为0)\n");
	printf("请输入a,b,c的值：");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a!=0)
	{
		root=(b*b)-(4*a*c);
		p=(-b)/(2.0*a);
		if (root>0)
		{
			q=(sqrt(root))/(2.0*a);
			x1=p+q;
			x2=p-q;
			printf("%.2lf x^2 + %.2lf x + %.2lf 有两个实数根：\n",a,b,c);
			printf("x1= %.2lf \t x2= %.21f",x1,x2);
		}
		if (root==0)
		{
			x1=p;
			printf("%.2lf x^2 + %.2lf x + %.2lf 有一个实数根：\n",a,b,c);
			printf("x1= %.2lf",x1);
		}
		if (root<0)
		{
			root=-root;
			q=(sqrt(root))/(2.0*a);
			printf("%.2lf x^2 + %.2lf x + %.2lf 无实数根\n",a,b,c);
        	printf("x1=%lf+%lfi",p,q);
        	printf("x2=%lf-%lfi",p,q);
		} 
	}
	else
		printf("a值不能为零，程序错误！");
	return 0;
}
