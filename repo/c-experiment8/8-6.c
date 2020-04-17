/*
    Name: 函数实验 8-6 
    Copyright:
    Author: Xiaomai
    Date: 2019-12-05 9:43:33 AM
    Description: 判断某一个四位数是不是玫瑰花数
		（所谓玫瑰花数即该四位数各位数字的四次方和恰好等于该数本身，
		如：1634 = 1^4 + 6^4 + 3^4 + 4^4）。
		在主函数中从键盘任意输入一个四位数，调用该函数，
		判断该数是否为玫瑰花数，若是则输出"yes",否则输出"no"。
*/
#include<stdio.h>
#include<string.h>
char result[4];
void rose(int n);
int main()
{
	int num;
	printf("Please input a 4-digits number: ");
	scanf("%d",&num);
	if(num<1000&&num>9999)
		printf("Not a valid data!");
	else 
	{
		rose(num);
		printf("Result = ");
		puts(result);
	}
	return 0;
}
void rose(int n)
{
	int a,b,c,d;
	a=n/1000;
	b=(n/100)%10;
	c=(n/10)%10;
	d=n%10;
	if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==n)
		strcpy(result,"Yes");
	else
		strcpy(result,"No");
}
