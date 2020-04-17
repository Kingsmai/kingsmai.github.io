/*
	Name	: 指针实验 10-3b
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
    for (i=0;i<3;i++)
    {
    	printf("Please input strings #%d",i+1);
    	s[i]=st[i];
		scanf("%s", s[i]);
	}
    for (i=0; i<3; i++)
        for (j=i+1;j<3;j++)
        	if(strcmp(s[i], s[j])>0)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
    for (p=s;p<s+3;p++)
    	 printf("%s ",*p);
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

