/*
	Name	: 指针实验 10-6 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/20 22:11:23
	Description: 编制一个字符替换函数，
		实现将已知字符串str中，	所有ch指定的字符都用ch2指定的字符代替。
		函数原型：void replace (char *str,char ch,char ch2)
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#include<string.h>	//字符串操作
#define length 50	//声明字符串长度
void replace (char *str, char ch, char ch2);
int main()
{
	char string[length],m,n;
	printf("Please input string:\n");	//输入提示 
	gets(string); 	//输入字符串 
	printf("Word to FIND: ");	//输入提示 
	scanf("%c",&m);	//输入字符 
	getchar();		//吃掉多余空格 
	printf("Word to REPLACE: ");//输入提示 
	scanf("%c",&n);	//输入字符 
	getchar();		//吃掉多余空格 
	replace(string, m, n);		//调用函数 
	printf("%s",string);		//输出string（置换过的） 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
void replace (char *str, char ch, char ch2)
{
	int i;
	for(i=0;i<length&&*(str+i)!='\0';i++)
		if(*(str+i)==ch)	//当搜索到该字符（指针查找地址） 
			*(str+i)=ch2;	//替换 
}
