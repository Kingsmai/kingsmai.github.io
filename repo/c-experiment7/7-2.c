/*
    Name: 数组实验 7-2 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-25 11:29:32 AM
    Description: 模仿strlen函数的实现方法，写出strcpy的函数实现方法
*/
#include<stdio.h>
int main()
{
	int i;
	char a[20],b[20];
	printf("Please insert strings (a): ");
	gets(a);
	for(i=0;a[i]!=0;i++)	//或者'\0' 
		b[i]=a[i];			//赋值 a 到 b 
	b[i]='\0';				//b 的结尾加 \0 
	printf("Strings b: ");
	puts(b);
	return 0;
}

