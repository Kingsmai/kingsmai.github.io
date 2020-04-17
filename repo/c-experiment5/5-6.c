/*
    Name: 循环实验 5-6 
    Copyright:
    Author: Xiaomai
    Date: 2019-11-13 8:43:18 AM
    Description: 陈婷E-mail邮箱的密码是一个5位数。
		但她好长时间没有打开这个邮箱了，把密码给忘了。
		不过陈婷的生日是8月1日，妈妈的生日是9月1日，爸爸的生日是10月4日，
		她只记得密码是81、91和104的公倍数。
		你能设计一个C语言程序帮她找回这个密码吗？ 
*/
#include<stdio.h>
int main()
{
	int i;
	for(i=104;i>0;i++)		//i的值设为最大值 
	{
		if(i%104==0&&i%91==0&&i%81==0)		//三个数的余数必须为 0 
		{
			printf("密码为：%d",i);
			break;
		}
	}
	return 0;
}

