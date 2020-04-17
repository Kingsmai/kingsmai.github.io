/*
	Name	: 指针实验 10-8 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/21 22:04:33
	Description: 编写一个函数，删除一个字符串中的指定字符， 
		函数原型：int delStr(char *str, char ch)
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#define length 100	//声明字符串长度 
int delStr(char *str, char ch); 
int main()
{
	char string[length],del;
	int x; 
	printf("Please input string:\n");	//输入提示 
	gets(string);	//存放字符串 
	printf("\n");	//换行 
	printf("Please input the character you want to delete: ");	//输入函数 
	scanf("%c",&del);	//存放要删除的字符 
	x=delStr(string, del);	//调用函数，返回值赋值给x 
	printf("\n");	//换行 
	puts(string);	//输出结果 
	printf("Deleted %d character(s).",x);	//删除了多少字 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
int delStr(char *str, char ch)
{   int i=0,count=0;
	for(i=0;*(str+i)!='\0';i++) 
    	if(*(str+i)==ch)	//当找到该字符 
    	{
			*(str+i)='\40';	//切换成空格 
			count++;		//计数器加一 
		}
	return count;	//返回计数器 
}
