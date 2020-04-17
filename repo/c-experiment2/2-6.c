#include<stdio.h>
int main()
{
	int a,b,c,x,avg;		//定义三个整数，一个备用计算整数，平均值 
	printf("输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b) {x=a;a=b;b=x;}
	if (a>c) {x=a;a=c;c=x;}
	if (b>c) {x=b;b=c;c=x;}
	avg = (a+b+b)/3;
	printf("最大值为：%d\n",c);
	printf("最小值为：%d\n",a);
	printf("平均数为：%d\n",avg);
}
