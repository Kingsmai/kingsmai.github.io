/*
	Name	: 指针实验 10-7 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/21 19:33:15
	Description: 自己编写一个函数，比较两个字符串是否相等，
		函数原型为：int Compare (char *str1, char *str2)
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#define length 100	//声明字符串长度 
int Compare (char *str1, char *str2);	//函数声明 
int main() 
{
	char pee[length], poo[length];		//定义两段字符串的变量 
	printf("Please input string #1: \n");//输入提示 
	gets(pee); 		//保存到pee变量 
	printf("\n");	//换行（整洁） 	
	printf("Please input string #2: \n");//输入提示 
	gets(poo);		//保存到poo变量 
	if(Compare(pee,poo))	//调用函数，当返回值 非0 时 
		printf("String 1 == String 2");	//输出相等情况 
	else
		printf("String 1 != String 2");	//输出不相等情况 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
int Compare (char *str1, char *str2)	//函数定义 
{
	int i,flag=1;	//flag标志（判断是否相等，作为返回值使用） 
	for(i=0;i<length&&*(str1+i)!='\0';i++)	//当 i < length，且不是字符串结束标志 
		if(*(str1+i)!=*(str2+i))	//当两个字符串的字符不相等 
			flag=0;
		else
			flag=1;
	return flag;		//返回标志 
}
