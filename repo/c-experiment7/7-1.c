/*
    Name: 数组实验 7-1 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-25 10:59:09 AM
    Description: 输入一行字符串，
		将该字符串中所有大写字母改为小写字母后存放在一新的数组中，
		最后输出原字符串和转换后的字符串
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20],lower[20];	//ch 用户输入 lower 转换输出 
	printf("Please insert character: ");
	gets(ch);			//用户输入字符串 
	strcpy(lower,ch);	//将 ch 复制到 lower 
	printf("\n");		//输出换行 
	puts(ch);			//输出 ch 
	puts(strlwr(lower));//输出 转换为小写的 lower 
	return 0;
}

