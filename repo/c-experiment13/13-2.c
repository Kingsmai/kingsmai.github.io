/*
*	Copyright (c) 2019, Xiaomai. All right reserved.
*	FileName:
*   Version	:
*	Author	: Xiaomai
*	Date	: 2019/12/30 下午 5:24:43
*	Desc	:
*	有两个磁盘文件，各存放一行字母，
*	先将数据读到内存，然后将其合并后，（按照字母顺序排列），
*	输出保存到一个新的文件中。
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#include<string.h>	//字符串操作
#define N 50
int main()
{
	char str1[(N+1)*2], str2[N+1], temp;
	FILE *fp1, *fp2, *out;
	int i,j,len;	//控制循环，判断字符串长度 
	if((fp1=fopen("a.txt","r"))==NULL)
	{
		printf("File 'a.txt' doesn\47t exist!");
		exit(1);
	}
	if((fp2=fopen("b.txt","r"))==NULL)
	{
		printf("File 'b.txt' doesn\47t exist!");
		exit(1);
	}
	if((out=fopen("result.txt","w"))==NULL)
	{
		printf("Unable to open 'result.txt'");
		exit(1);
	}
	fgets(str1,N,fp1);
	printf("Data a.txt\t: "); 
	puts(str1);
	fgets(str2,N,fp2);
	printf("Data b.txt\t: ");
	puts(str2);
	strcat(str1,str2);	//调用函数并接两个字符串
	printf("Combined Data\t: ");
	puts(str1);	//输出合并后的字符串 
	len=strlen(str1);
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(str1[j]>str1[j+1])
			{
				temp=str1[j];
				str1[j]=str1[j+1];
				str1[j+1]=temp;
			}
		}
	}
	printf("Output\t\t: ");
	puts(str1);	//输出排序后的字符串 
	fputs(str1,out);	//写入文件 
	if(fclose(fp1))
	{
		printf("Failed to close the file 'a.txt'.");
		exit(1);
	}
	if(fclose(fp2))
	{
		printf("Failed to close the file 'b.txt'.");
		exit(1);
	}
	if(fclose(out))
	{
		printf("Failed to close the file 'result.txt'.");
		exit(1);
	}
	printf("\n\n====================\n");
	system("PAUSE");
	system("CLS");
	return 0;
}
