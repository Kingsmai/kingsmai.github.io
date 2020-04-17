#include <stdio.h>
int main ()
{	
	int Stuid1,Stuid2;															//由于现在还没学到数组，所以定义分开由数字代替
	char Sex1[8],Sex2[8];														//定义性别为字符串
	float Chi1,Chi2,Math1,Math2,Eng1,Eng2,Sum1,Sum2,Avg1,Avg2;					//定义浮点数，语文，数学，英语，总分，平均分
	printf("请输入第一位学生的学号，性别，语文分数，数学分数，英语分数:\n");	//第一位学生，使用者提示，并换行
	scanf("%d%s%f%f%f",&Stuid1,Sex1,&Chi1,&Math1,&Eng1);						//第一位学生输入，空格分开
	printf("请输入第二位学生的学号，性别，语文分数，数学分数，英语分数:\n");	//第二位学生，使用者提示，并换行
	scanf("%d%s%f%f%f",&Stuid2,Sex2,&Chi2,&Math2,&Eng2);						//第二位学生输入，空格分开 
	Sum1=Chi1+Math1+Eng1;		//总分算法 
	Avg1=Sum1/3;				//总平均算法 
	Sum2=Chi2+Math2+Eng2;		//总分算法 
	Avg2=Sum2/3;				//总平均算法 
	printf("==============================================================\n");
	printf("学生学号   性别   语文   数学   英语   平均分   总分\n");
	printf("%-10d %-6s %.2f %.2f %.2f %.2f %.2f\n",Stuid1,Sex1,Chi1,Math1,Eng1,Avg1,Sum1);
	printf("%-10d %-6s %.2f %.2f %.2f %.2f %.2f\n",Stuid2,Sex2,Chi2,Math2,Eng2,Avg2,Sum2); 
	return 0;
}

