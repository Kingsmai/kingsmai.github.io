/*
    Name:三角形类型判断 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-02 12:03:36 AM
    Description:判断三角形：输入三角形的三边，判断是否能构成三角形，若不能则输出：此三角形不存在；若能构成三角形，则判断是否为等边三角形？ 
*/

#include<stdio.h>
#include<math.h>
main ()
{
	float a,b,c;
	float s,area;
	printf("请输入三角形的三边(a,b,c)：");
	scanf("%f,%f,%f",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b))
	{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));			//计算三角形的面积 
		printf("三角形面积为：%f\n",area);
		if (a==b&&a==c)							//判断三条边是否相等
			printf("为等边三角形。");
		else if (a==b||b==c||c==a)				//判断是否有两边相等 
			printf("为等腰三角形。");
		else if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
			printf("为直角三角形。");
		else
			printf("为普通三角形。");
	}
	else
	{
		printf("此三组数据无法组成三角形。");
	}
	return 0;
} 
