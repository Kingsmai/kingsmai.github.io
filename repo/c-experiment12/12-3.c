/*
*	Copyright (c) 2019, Xiaomai. All right reserved.
*	FileName:
*   Version	:
*	Author	: Xiaomai
*	Date	: 2019/12/26 17:36:10
*	Desc	:
*	定义一个名为teacher的结构体，
*	其包含的成员名有：姓名，职称，年龄。
*	并在主函数中定义一个结构体数组，其包含3个元素，
*	并将3个元素分别初始化为
*	“lily”、“讲师”、35，
*	“lucy”、“讲师”、37，
*	“Tom”、“副教授”、45，
*	并使用循环结构将该结构体数组中的3个元素的值输出。 
*/
#include<stdio.h>	//输入输出，文件控制
#include<stdlib.h>	//动态内存分配，数值转换
struct teacher
{
	char name[4];	//姓名 
	char occu[8];	//职位 
	int age;		//年龄 
};
int main()
{
	int i;
	struct teacher crew[3]={	//初始化结构体 
		{"Lily","讲师",35},
		{"Lucy","讲师",37},
		{"Tom","副教授",45}, 
	};
	for(i=0;i<3;i++)	//循环输出 
	{
		printf("Name\t: %s\n",crew[i].name);
		printf("Position: %s\n",crew[i].occu);
		printf("Age\t: %d\n",crew[i].age);
		printf("\n"); 
	}
	printf("\n\n====================\n");
	system("PAUSE");
	return 0;
}

