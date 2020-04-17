/*
	Name	: 指针实验 11-2 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/22 10:14:33
	Description: 编写程序，实现下面一个有关单词个数统计问题。
		编写一个函数findstr(char *str,char *substr)，
		该函数统计substr子字符串在另一个字符串str中出现的次数。
		例如，假定输入的字符串为“asd asasdfg asd as zx67 asd mklo”，子字符串为as，函数返回值是6
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#include<string.h>	//字符串操作
#define length 100	//声明字符串长度 
int findstr(char *str, char *substr);	//函数声明 
int main()
{
	char str1[length],str2[length];	//定义变量
	printf("Please input string:\n");	//输入提示 
	gets(str1);		//获取字符串 
	printf("\n");	//换行 
	printf("Please string to find:\n"); 	//输入提示 
	gets(str2);		//获取字符串 
	printf("\n");	//换行 
	if(findstr(str1, str2)) 
		if(findstr(str1, str2)==-1)
			printf("Input error! Second string too long.");
		else 
			printf("Total %d",findstr(str1, str2));	//输出结果
	else
		printf("Cannot locate such words.");	//查无此字 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
int findstr(char *str, char *substr)
{
	if (strlen(str) < strlen(substr))	//当子字符串长度大于字符串 
		return -1;
	int count = 0;	//计数器 
	while (str = strstr(str, substr))	//查找子字符串函数 
	{
		str += strlen(substr);			//指针加上子字符串长度 
		count++;
	}
	return count;
}

