/*
*	Copyright (c) 2019, Xiaomai. All right reserved.
*	FileName:
*   Version	:
*	Author	: Xiaomai
*	Date	: 2019/12/31 下午 2:40:04
*	Desc	:
*	有两个磁盘文件，分别保存着1班和2班同学的信息，如何将他们的信息合并，并保存到一个文件中。
*	如文件1中同学的信息如下：
*	Lily 20170201 湖北省武汉市武昌区 
*	Tom  20170202 湖北省武汉市洪山区
*	Jack 20170203 湖北省黄石市
*	文件2中同学的信息如下：
*	Lucy 20170201 湖北省宜昌市
*	合并后文件3中的信息如下：
*	Lily 20170201 湖北省武汉市武昌区 
*	Tom  20170202 湖北省武汉市洪山区
*	Jack 20170203 湖北省黄石市
*	Lucy 20170201 湖北省宜昌市
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#define N 100
int main()
{
	FILE *in1, *in2, *out;//文件指针
	char str1[N+1], str2[N+1];
	if((in1=fopen("list1.txt","r"))==NULL)	//打开文件出错处理 
	{
		printf("File 'list1.txt' doesn\47t exist.");
		exit(1);
	}
	if((in2=fopen("list2.txt","r"))==NULL)
	{
		printf("File 'list2.txt' doesn\47t exist.");
		exit(1);
	}
	if((out=fopen("result.txt","w"))==NULL)
	{
		printf("Cannot open 'result.txt'.");
		exit(1);
	}
	while(fgets(str1,N,in1)!=NULL)	//一行一行的录入新的文件 
	{
		fputs(str1,out);
	}
	fputs("\n",out);
	while(fgets(str2,N,in2)!=NULL)	//一行一行的录入新的文件
	{
		fputs(str2,out);
	}
	printf("Combine complete (Overwrited)"); 
	//以下为关闭文件 
	if(fclose(in1))
	{
		printf("Unable to close the file");
		exit(1);
	}
	if(fclose(in2))
	{
		printf("Unable to close the file");
		exit(1);
	}
	if(fclose(out))
	{
		printf("Unable to close the file");
		exit(1);
	}
	printf("\n\n====================\n");
	system("PAUSE");
	system("CLS");
	return 0;
}

