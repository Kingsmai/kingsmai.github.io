/*
*	Copyright (c) 2019, Xiaomai. All right reserved.
*	FileName:
*   Version	:
*	Author	: Xiaomai
*	Date	: 2019/12/28 20:15:06
*	Desc	: 从键盘输入自己的姓名和学号，并用一个磁盘文件保存起来。磁盘文件名为name.txt
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
int main()
{
	char data[20]={'\0'};	//定义字符数组存放字符 
	FILE *fp;	//定义文件指针
	if((fp=fopen("name.txt","w"))==NULL)	//以写的方式打开文件
	{
		printf("Failed to open file");	//打开文件出错处理 
		exit(1);
	}
	printf("Please input your name and student ID:\n");
	printf("Use CTRL+Z to end input.\n");
	gets(data);
	while (!feof(stdin))	//写入多个字符串，并以CTRL+z结束
	{
		fputs(data,fp);
		fputs("\n",fp);
		gets(data);
	} 
	if(fclose(fp))
	{
		printf("Unable to close the file");
		exit(0);
	}
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

