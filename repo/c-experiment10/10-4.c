/*
	Name	:
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/20 16:08:02
	Description: 输入月份号，输出该月的英文月名。
		例如，输入“3”，则输出“March”，要求用指针数组处理
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
int main()
{
	char* month[12]={"January","Febuary","March","April",
		"May","June","July","August",
		"September","October","November","December"};	//定义数组和数组元素 
    int i;	//输入 
	printf("Please input (1<= month >=12): ");	//输入提示
    scanf("%d",&i);	//输入月份 
	if(month<1&&month>12)
		printf("Input error!");
	else
		printf("%s",month[i-1]);	//访问指针数组 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

