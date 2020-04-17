/*
    Name:
    Copyright:
    Author: Xiaomai
    Date: 2019-11-25 6:55:20 PM
    Description: 统计一个源字符串中某个子字符串的个数，该字符串与单个字符均由用户定义
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,length,count=0,flag=0;		//循环控制变量 
	char str[100],search[10]; 
	printf("Please input strings: ");
	gets(str);
	printf("Please input search words: ");
	gets(search);
	length=strlen(search);		//思路：判断子字符字符长度
	for(i=0;str[i]!='\0';i++)	//循环字符的数组 
	{
		flag=0;
		j=0;
		while(str[i]==search[j])//当字符等于子字符 
		{
			j+=1;		//字符数组 +1 
			i+=1;		//子字符数组 +1 
			flag+=1;	//字符长度 
			if(flag==length)	//是否等于子字符长度 
				count+=1;
		}
	}
	printf("Total: %d time(s).",count);
	return 0;
}

