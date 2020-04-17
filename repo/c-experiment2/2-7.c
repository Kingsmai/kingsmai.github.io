#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,g,h,i,j,max,min,avg;
	printf("请输入十个实数：");
	scanf("%f%f%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	avg = (a+b+c+d+e+f+g+h+j)/10;
	max=0;
	min=a;
	if (a>max)	{max=a;}
	if (a<min)	{min=a;}
	if (b>max)	{max=b;}
	if (b<min)	{min=b;}
	if (c>max)	{max=c;}
	if (c<min)	{min=c;}
	if (d>max)	{max=d;}
	if (d<min)	{min=d;}
	if (e>max)	{max=e;}
	if (e<min)	{min=e;}
	if (f>max)	{max=f;}
	if (f<min)	{min=f;}
	if (g>max)	{max=g;}
	if (g<min)	{min=g;}
	if (h>max)	{max=h;}
	if (h<min)	{min=h;}
	if (i>max)	{max=i;}
	if (i<min)	{min=i;}
	if (j>max)	{max=j;}
	if (j<min)	{min=j;}
	printf("最大值为：%f\n",max);
	printf("最小值为：%f\n",min);
	printf("平均数为：%f\n",avg);
}
