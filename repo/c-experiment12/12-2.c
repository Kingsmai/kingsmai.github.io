/*
*	Copyright (c) 2019, Xiaomai. All right reserved.
*	FileName:
*   Version	:
*	Author	: Xiaomai
*	Date	: 2019/12/26 0:46:42
*	Desc	:
*	使用上面定义的结构体对10名学生的学号和成绩进行保存，
*	并按成绩升序进行排列，输出排序后的学号、成绩和平均分。
*	（使用结构体数组） 
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
#define N 5	//学生人数设定 
struct student	//建立结构体
{ 
	int id;			//学号
	float score[3];	//分数，三门课程
	float avg;		//总平均
}std[N],temp;	//初始化，三个学生的成绩，排序用临时位置 
int i,j;	//控制循环
float sum;		//总分
void inputID();		//函数声明：输入学号 
void inputScore();	//函数声明：输入每门分数 
void getStdAvg();	//函数声明：计算个人平均
void ranking();		//函数声明：排行 
int main()
{
	for(i=0;i<N;i++)
	{
		inputID();
		printf("\n");
		inputScore();
		printf("\n");
		getStdAvg();
	}
	for(i=0;i<N;i++)	//冒泡排序法 
		for(j=0;j<N-i-1;j++)
			ranking();	//排名 
	for(i=0;i<N;i++)	//输出结果 
	{
		printf("Student ID: %8d \t",(std[i].id));
		printf("Math: %.3f \t",(std[i].score[0]));
		printf("Eng : %.3f \t",(std[i].score[1]));
		printf("Comp: %.3f \t",(std[i].score[2]));
		printf("Avg : %.3f \n",(std[i].avg));
	}
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
void inputID()		//学号输入函数 
{
	printf("Please input #%d student\47s ID: ",i+1);
	scanf("%d",&std[i].id);
}
void inputScore()	//分数输入函数 
{
	printf("Student #%d score:--- \n",i+1);
	printf("Mathematic\t: ");
	scanf("%f",&std[i].score[0]);
	printf("English\t\t: ");
	scanf("%f",&std[i].score[1]);
	printf("Computer\t: ");
	scanf("%f",&std[i].score[2]);
	printf("\n");
}
void getStdAvg()	//计算学生总平均 
{
	sum=0;
	for(j=0;j<3;j++)
		sum+=(std[i].score[j]);
	(std[i].avg)=sum/3;
}
void ranking()	//排名函数 
{
	if(std[j].avg>std[j+1].avg)	//冒泡排序法 
	{
		temp=std[j];
		std[j]=std[j+1];
		std[j+1]=temp;
	}
}
