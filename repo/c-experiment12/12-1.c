/*
*	Copyright (c) 2019, Xiaomai. All right reserved.
*	FileName:
*   Version	:
*	Author	: Xiaomai
*	Date	: 2019/12/25 19:36:37
*	Desc	:
*
*	定义一个学生结构体，
*	然后输入3个学生的学号和数学、英语、计算机成绩，要求： 
*	(1) 计算每一个学生的平均成绩。 
*	(2) 计算每门课程的平均成绩。 
*	最后输出3个同学的所有信息。
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
struct student	//建立结构体
{ 
	int id;			//学号
	float score[3];	//分数，三门课程
	float avg;		//总平均
}std[3];	//初始化，三个学生的成绩
int i,j;	//控制循环
float sum;		//总分
float classAvg[3];	//课程总平均 
void inputID();		//函数声明：输入学号 
void inputScore();	//函数声明：输入每门分数 
void getStdAvg();	//函数声明：计算个人平均 
void getAverage();	//函数声明：计算课程平均 
int main()
{
	inputID();
	printf("\n");
	inputScore();
	printf("\n");
	getStdAvg(); 
	getAverage();
	for(i=0;i<3;i++)
	{
		printf("Student ID: %d \t",(std[i].id));
		printf("Math: %.3f \t",(std[i].score[0]));
		printf("Eng : %.3f \t",(std[i].score[1]));
		printf("Comp: %.3f \t",(std[i].score[2]));
		printf("Avg : %.3f \n",(std[i].avg));
	}
	printf("\n");
	printf("Math Avg: %.3f \n",classAvg[0]);
	printf("Eng  Avg: %.3f \n",classAvg[1]);
	printf("Comp Avg: %.3f \n",classAvg[2]);
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}
void inputID()
{
	for(i=0;i<3;i++)
	{
		printf("Please input #%d student\47s ID: ",i+1);
		scanf("%d",&std[i].id);
	}
}
void inputScore()
{
	for(i=0;i<3;i++)
	{
		printf("Student #%d score: \n",i+1);
		sum=0;
		printf("Mathematic\t: ");
		scanf("%f",&std[i].score[0]);
		printf("English\t\t: ");
		scanf("%f",&std[i].score[1]);
		printf("Computer\t: ");
		scanf("%f",&std[i].score[2]);
		std[i].avg=sum/3;	//计算平均分 
		printf("\n");
	}
}
void getStdAvg()
{
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
			sum+=(std[i].score[j]);
		(std[i].avg)=sum/3;
	}
}
void getAverage()
{
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			sum+=(std[j].score[i]);
			classAvg[i]=sum/3; 
		}
	}
}
