/*
    Name: 数组实验 7-3 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-25 11:46:49 AM
    Description: 统计一个源字符串中某个字符的个数，该字符串与单个字符均由用户定义
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;			//i 控制 for 循环 
	char str[50],search;	//输入字符串 搜索字符 
	printf("Please input strings: ");
	gets(str);				//用户输入 str 字符串 
	printf("Please input character: ");
	search=getchar();		//用户输入 search 字符 
	for(i=0;str[i]!='\0';i++)	//遍历搜索出现的字符串 
	{
		if(str[i]==search)
			count+=1;		//当出现该字符串，+1
	}
	printf("%c appeared: %d time(s).\n",search,count); 
	return 0;
}

