/*
	Name	:
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/23 19:51:33
	Description:
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#define length 100	//字符串长度 
void delStr(char *str,char ch); 
int main()
{
	char string[length],del;
	int x; 
	printf("Please input string:\n");	//输入提示 
	gets(string);	//存放字符串 
	printf("\n");	//换行 
	printf("Please input the character you want to delete: ");	//输入函数 
	scanf("%c",&del);	//存放要删除的字符 
	printf("\n");	//换行 
	puts(string);	//输出结果 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
void delStr(char *str,char ch)
{
	char *m,*n;
	m=str;	//指针指向str数组 
	n=str; 	//指针指向str数组 
	while(*m!='\0')	//非0循环 
	{
		if(*m!=ch)	//当查找到对应要删除的字符时
			*n++=*m;//后段字符串向前移动一位 
		m++;	//源字符串指针自增1 
	}
	*n='\0';	//插入字符串结束标志 
}
