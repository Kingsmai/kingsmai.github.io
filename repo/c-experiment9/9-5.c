/*
    Name: 函数实验 9-5 
    Copyright:
    Author: Xiaomai
    Date: 2019/12/12 1:50:07
    Description: 将两个字符串顺序相接，
		如串一为：asdfg,串二为：zxcvb,
		则最后的结果为：abcdfgsvxz；
		字符串连接在子函数中实现，输入输出在主函数中实现
*/
#include<stdio.h>
#include<string.h> 
void catnArrange(char str1[], char str2[]);		//函数声明 
int main()
{
	char str1[20], str2[20];
	printf("Please input string 1: ");
	gets(str1);
	printf("Please input string 2: ");
	gets(str2);
	catnArrange(str1, str2);
	printf("The new string is: ");
	puts(str1);
	return 0;
}
void catnArrange(char str1[], char str2[])
{
	int i,j,n;
	char t;
	strcat(str1, str2);		//复制 str2 给 str1 
	n=strlen(str1);		//判断 str1 长度 
	for(i=0;i<n;i++)		//冒泡排序法 
		for(j=0;j<n-i-1;j++)
			if(str1[j]>str1[j+1])
			{
				t=str1[j];
				str1[j]=str1[j+1];
				str1[j+1]=t;
			}
}
