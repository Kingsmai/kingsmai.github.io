/*
    Name:薪水计算器 
    Copyright:
    Author:Xiaomai
    Date: 2019-11-03 9:49:18 AM
    Description:某公司销售员工，底薪为2000，销售额与提成比例为：
				（1）	当销售额<=3000时，没有提成
				（2）	当3000<销售额<=7000时，提成10%
				（3）	当7000<销售额<=10000时，提成15%
				当销售额>10000时，提成20%
				根据以上规则，设计一个程序，根据输入的销售额显示应发工资。
*/

#include<stdio.h>
int main()
{
	float bonus;
	int sales,salary;
	printf("请输入本月销售额：");
	scanf("%d",&sales);
	if (sales<=3000)
		{bonus=0;} 
	if (sales>3000&&sales<=7000)
		{bonus=0.1;}
	if (sales>7000&&sales<=10000)
		{bonus=0.15;}
	if (sales>10000)
		{bonus=0.2;}
	salary=2000+(sales*bonus);
	printf("您本月薪金为%d。",salary,); 
	return 0;
}
