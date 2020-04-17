/*
    Name: 函数实验 8-5 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-05 9:12:45 AM
    Description: 判断某年是否为闰年，
		输入输出信息均在主函数中实现
*/
#include<stdio.h>
#include<string.h>
char leap[10];	//定义输出字符串
void isleap(int x);
int main()		//主函数 
{
	int year; 
	printf("Please input year: ");
	scanf("%d",&year);
	isleap(year);
	printf("Is leap year?: ");
	puts(leap);
	return 0;
}
void isleap(int x)	//判断是否为闰年函数 
{
	if(x%400==0||x%4==0&&x%100!=0)
		strcpy(leap,"True");
	else
		strcpy(leap,"False");
}
