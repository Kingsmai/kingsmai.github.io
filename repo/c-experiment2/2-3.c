#include<stdio.h>
int main()
{
	float x,y;
	printf("输入一个坐标值（x,y）：");
	scanf("%f,%f",&x,&y);
	if (x>0&&y>0)
		printf("%f,%f\t坐标在第一像限",x,y);
	if (x<0&&y>0)
		printf("%f,%f\t坐标在第二像限",x,y);
	if (x<0&&y<0)
		printf("%f,%f\t坐标在第三像限",x,y);
	if (x>0&&y<0)
		printf("%f,%f\t坐标在第四像限",x,y);
	if (x==0&&y==0)
		printf("此坐标在原点。");
	return 0;
}
