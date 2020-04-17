/*
    Name: 循环实验 7-6 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-26 12:19:16 PM
    Description: 从键盘任意输入5个学生的姓名，编程找出并输出按字典顺序排在最前面的学生姓名
*/
// 思路：定义二维数组，名字整体为行，字符为列
// 判断第一个字符的首字母
// 补充：当第一个字母相同，则判断后续字母相同与否。 
// 进行排序 
#include<stdio.h>
#include<string.h>
 int main()
{
	char a[5][80];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Please input No.%d student name: ",i+1);
		scanf("%s",a[i]);
	}
	for(i=1;i<5;i++)
	{
		if(strcmp(a[0],a[i])==1)	//当字符比前面大 
			strcpy(a[0],a[i]);		//复制字符串 
	}
	printf("First student name is: %s\n",a[0]);
	return 0;
}
