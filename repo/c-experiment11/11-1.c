/*
	Name	:
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/22 4:07:41
	Description: 编写函数insert(char *s1,char *s2,int pos)，
		实现在字符串s1中的指定位置pos处插入字符串s2。如：
		Happy Year; New; 7
		结果为：Happy New Year
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#include<string.h>	//字符串操作
#define length 100	//字符串长度 
void insert(char *s1,char *s2,int pos);
int main()
{
	char str1[length], str2[length]; 
	int n;	//指定位置内存 
	printf("Please input string:\n");		//输入提示 
	gets(str1);		//获取字符串str1 
	printf("\n");	//换行 
	printf("Please input insert string:\n");//输入提示 
	gets(str2);		//获取字符串str2 
	printf("\n");	//换行 
	printf("Please input location (n): ");	//输入提示 
	scanf("%d",&n);	//输入位置 
	printf("\n");	//换行 
	insert(str1, str2, n);	//调用函数 
	puts(str1);		//输出插入后的字符串 
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
void insert(char *s1,char *s2,int pos)
{
	if(pos<1) return;	//当位置无效，则直接返回 
	int i,j;	//控制循环 
	char str_h[length];	//源字符串（左边） 
	char str_t[length];	//临时字符串 
	for(i=0;i<pos;i++)	//不需要插入的字符串遍历赋值给源字符串 
		str_h[i]=s1[i];	
	str_h[i]='\0';		//放入字符串结束标识
	for(j=0;s1[i];i++,j++)	//字符串的后半段赋值给临时字符串 
		str-t[j]=s1[i]; 
	str_t[j]='\0';		//放入字符串结束标志 
	strcpy(s1,str_h);	//复制源字符串给予s1 
	strcat(s1,s2);		//在s1插入字符串s2 
	strcat(s1,str_t);	//在s1插入临时字符串 
}
