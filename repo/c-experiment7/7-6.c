/*
    Name:
    Copyright:
    Author: Xiaomai
    Date: 2019-11-27 3:11:43 PM
    Description: ����10���ַ�����������С���������
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][100],temp[100];
	int i,j;
    for(i=0;i<10;i++)
	{
		printf("Please input string (%d): ",i+1);
		gets(str[i]);	//�Ӽ��������ַ��� 
	}
    for(i=0;i<8;i++)
		for(j=i+1;j<9;j++)
		{   
			if(strcmp(str[i],str[j])>0) //ð������ 
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	printf("\nAfter arrange:\n"); 
	for(i=0;i<9;i++)
		puts(str[i]);	//��� 
}
