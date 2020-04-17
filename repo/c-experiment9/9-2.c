/*
    Name:
    Copyright:
    Author: Xiaomai
    Date: 2019-12-05 5:08:04 PM
    Description: 根据用户的选择求不同形状的面积，
		如：用户选择"1"，则计算长方形面积；
		用户选择"2"，则计算三角形面积；
		用户选择"3"，则计算圆形面积。
		面积的计算通过子函数完成，
		输入输出信息均在主函数中实现
*/
#include<stdio.h>
#define PI 3.14159
float area=0;
float sqarea(float length, float width);
float triarea(float base, float height);
float cirarea(float radius);
void prtstar(void);
int main()
{
	float a,b;
	int choice;
	printf("1. Calculate Square Area\n");
	printf("2. Calculate Triangle Area\n");
	printf("3. Calculate Circle Area\n");
	prtstar();
	printf("Choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Please input (Length Width): ");
			scanf("%f%f",&a,&b);
			area=sqarea(a,b);
			break;
		case 2:
			printf("Please input (Base Height): ");
			scanf("%f%f",&a,&b);
			area=triarea(a,b);
			break;
		case 3:
			printf("Please input (Radius): ");
			scanf("%f",&a);
			area=cirarea(a);
			break;
		default:
			printf("Input NOT VALID!");
			break;		
	}
	if (area)
		printf("Area = %f (unit)^2",area);
	return 0;
}
void prtstar(void)
{
	printf("******************************************\n");
}
float sqarea(float length, float width)
{
	return (length*width);
}
float triarea(float base, float height)
{
	return ((base*height)/2);
}
float cirarea(float radius)
{
	return (PI*radius*radius);
}
