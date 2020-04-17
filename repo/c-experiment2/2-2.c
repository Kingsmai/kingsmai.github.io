#include<stdio.h>
int main()
{
	float r,Area,PI=3.14159;
	printf("Please input radius:");
	scanf("%f",&r);
	if (r>=0)
	{
		Area=PI*r*r;
		printf("圆的面积为：%f。",Area);
	}
	else
		printf("输入的半径无效！");
	return 0;
}
