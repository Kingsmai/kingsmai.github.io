/*
    Name:三角形类型判断简化版 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-03 1:21:24 AM
    Description:判断三角形：输入三角形的三边，判断是否能构成三角形，若不能则输出：此三角形不存在；若能构成三角形，则判断是否为等边三角形？
*/

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("请输入三角形的三边(a,b,c)：");
	scanf("%f,%f,%f",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b))		//三角形定律：两边相加大于另一边
	{
		if (a==b&&a==c)							//判断三条边是否相等
			printf("为等边三角形。");
		else
			printf("为普通三角形。");
	}
	else
	{
		printf("此三角形不存在");
	}
	return 0;
}
