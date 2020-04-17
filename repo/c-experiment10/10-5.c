/*
	Name	: 指针实验 10-5 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/20 18:09:32
	Description: 编写一个函数，实现将一个已知字符串的内容复制到一个新的字符串
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#define MAX_LENGTH 100	//声明字符串预留位子 
int copystring(char*b,char*a); 
int main()
{
	char a[MAX_LENGTH],b[MAX_LENGTH];
	printf("Please input a string:");
	gets(a);
	printf("a=%s\n",a);
	copystring(b,a);
	printf("After copy:\n"); 
	printf("b=%s\n",b);
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
int copystring(char*b,char*a)
{
	int i=0;
	while(a[i]!='\0')	//判断不是字符串结束标志 
	{
		b[i]=a[i];		//复制操作 
		i++;	//数组元素下标 +1 
	}
	b[i]='\0';	//加上字符串结束标志 
	return i;	//返回值为字符串的长度
}
