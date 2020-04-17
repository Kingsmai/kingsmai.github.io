/*
    Name: 指针实验 10-1 
    Copyright:
    Author: Xiaomai
    Date: 2019/12/13 19:44:42
    Description: 有一个字符串，包含n个字符。
		写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串；
		（复制操作在子函数中实现，并用指针传递） 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int copy(char *p1,char *p2,int m);	//函数声明 
int main()
{	
	char str1[40],str2[40];
	printf("Please input string: ");	//输入提示	
	gets(str1);				//获取字符串 
	int m;
	printf("Start from #m character (value): ");//输入提示 
	scanf("%d",&m);			//获取数字 
	if(strlen(str1)<m)		//当源字符串长度小于m时 
		printf("Error: Can't locate the start character.");
	else
	{
		copy(str1,str2,m);	//调用函数 
		printf("%s",str2);	//输出新的字符串 
	} 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
int copy(char *p1,char *p2,int m)	//函数定义 
{
	int n;
	n=0;
	while(n<m-1)
	{
		n++;
		p1++;
	}
	while(*p1!='\0')	//不是字符串结束标志就复制 
	{
		*p2=*p1;
		p1++;
		p2++;
	}
}
