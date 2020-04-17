/*
	Name	: 指针实验 10-3a 
	Copyright:
	Author	: Xiaomai
	Date	: 2019/12/20 14:48:39
	Description: 输入3个字符串，按照由小到大的顺序将其输出，并要求用指针进行操作
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#include<string.h>	//字符串操作
int main()
{
	char *s[3],st[3][10],**p,*t;
    int i,j;
    for (i=0, printf("Please enter 3 strings: "); i<3; s[i]=st[i], scanf("%s", s[i++]));
    for (i=0; i<3; i++)
        for (j=i+1; j<3; strcmp(s[i], s[j])>0 ? t=s[i], s[i]=s[j], s[j]=t, j++ : j++);
    for (p=s; p<s+3; printf("%s ", *p++));
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

