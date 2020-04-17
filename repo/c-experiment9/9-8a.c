#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct book
{
	char sm[88];
	char zzm[88];
	char isbn[88];
	char cbdw[88];
	char cbnf[88];
	float jg;
}books[88];
int i=0;
main()
{
	void lr();/*录入*/
	void ll();/*浏览*/
	void cx();/*查询*/
	void sc();/*删除*/
	void xg();/*修改*/
	int n;
	for(;;)
	{
		system("cls");
		printf("\n");
        printf("**************************************************************\n");
        printf("**************************************************************\n");
        printf("**                                                          **\n");
        printf("**                 欢迎来到图书信息管理系统                 **\n");
        printf("**                                                          **\n");
        printf("**                                                          **\n");
		printf("**                          主菜单                          **\n");
		printf("**                                                          **\n");
        printf("**                 ▲1.图书信息录入功能  ▲                 **\n");        
		printf("**                                                          **\n");
		printf("**                 ▲2.图书信息浏览功能  ▲                 **\n");
        printf("**                                                          **\n");
		printf("**                 ▲3.图书信息查询功能  ▲                 **\n");          
		printf("**                                                          **\n");
		printf("**                 ▲4.图书信息删除功能  ▲                 **\n");
	    printf("**                                                          **\n");
		printf("**                 ▲5.图书信息修改功能  ▲                 **\n");
        printf("**                                                          **\n");
		printf("**                 ▲6.    退出系统      ▲                 **\n"); 
		printf("**                                                          **\n");
		printf("**************************************************************\n");
		printf("**************************************************************\n\n");
        printf("请输入选择项(1-6):");
        scanf("%d",&n);
		system("cls");
		switch(n)
		{
			case 1:lr();break;
			case 2:ll();break;
			case 3:cx();break;
			case 4:sc();break;
			case 5:xg();break; 
			case 6:	printf("************************************************\n");
					printf("*                                              *\n");
					printf("*                   谢谢使用!                  *\n");
					printf("*                     再见!                    *\n");
					printf("*                                              *\n");
                    printf("************************************************\n");
                	exit(0);
			default :
			{
				printf("************************************************\n");
				printf("*                                              *\n");
				printf("*                   输入错误!                  *\n");
				printf("*                    请退出!                   *\n");
				printf("*                                              *\n");
				printf("************************************************\n");
				exit(0);
			}
		}
	}
}
lr()/*录入*/
{
	char a[4];
	do
	{
		system("cls");
		printf("********************************************************************\n");
		printf("请输入第%d本书：\n\t书名\t作者名\tISBN号\t出版单位\t出版年份\t价格\n",i+1);
		scanf("%s%s%s%s%s%f",books[i].sm,books[i].zzm,books[i].isbn,books[i].cbdw,books[i].cbnf,&books[i].jg);
		printf("\n\n这是第%d本书：\n\n",i+1); 
		printf("%6d%14s%14s%14s%14s%8s%8.2f\n\n是否确认录入(yes/no)\n\n",i+1,books[i].sm,books[i].zzm,books[i].isbn,books[i].cbdw,books[i].cbnf,books[i].jg);
		scanf("%s",a);
		if(strcmp(a,"yes")&&strcmp(a,"no"))
		{
			printf("输入错误请重新输入\n");
			scanf("%s",a);
		}
		if(strcmp(a,"yes")==0) 
			i++;
		printf("\n是否还要继续录入(yes/no)\n\n");
			scanf("%s",a);
		if(strcmp(a,"yes")&&strcmp(a,"no"))
		{
			printf("输入错误请重新输入\n");
			scanf("%s",a);
		}
	}while(strcmp(a,"yes")==0);
}
ll()/*浏览*/
{
	int n;
	printf("*******************************************************************************\n");
	printf("图书列表:\n\n"); 
	for(n=0;n<i;n++)
	{
		printf("%6d%14s%14s%14s%14s%8s%8.2f\n",n+1,books[n].sm,books[n].zzm,books[n].isbn,books[n].cbdw,books[n].cbnf,books[n].jg);
		printf("*******************************************************************************\n");
	}
		system("pause");
}
cx()/*查询*/
{
	void smcx();/*书名查询*/
	void zzcx();/*作者查询*/
	void cbscx();/*出版社查询*/
	void cbnfcx();/*出版年份查询*/
	int n;
	printf("请输入查询类型\n********************************************************************\n");
	printf("*                                                                  *\n");
	printf("*                        ▲1.  按照书名查询    ▲                  *\n");
	printf("*                                                                  *\n");
	printf("*                        ▲2.  按照作者查询    ▲                  *\n");
	printf("*                                                                  *\n");
	printf("*                        ▲3. 按照出版社查询   ▲                  *\n");
	printf("*                                                                  *\n");
	printf("*                        ▲4.按照出版年份查询  ▲                  *\n");
	printf("*                                                                  *\n");
	printf("*                        ▲5.   退 出 查 询    ▲                  *\n");
	printf("*                                                                  *\n");
	printf("********************************************************************\n");
	scanf("%d",&n);
	system("cls");
	switch(n)
	{
		case 1:smcx();break;
		case 2:zzcx();break;
		case 3:cbscx();break;
		case 4:cbnfcx();break;
		case 5:return 0;
		default :
		{
			printf("************************************************\n");
			printf("*                                              *\n");
			printf("*                   输入错误!                  *\n");
			printf("*                    请退出!                   *\n");
			printf("*                                              *\n");
			printf("************************************************\n");
			return 0;
		}
	}
}
sc()/*删除*/
{
	int n,j;
	char a[4];
	do{
		if(i<1)
		{
			printf("****************************************************************************\n");
			printf("*                                                                          *\n");
			printf("*                             该系统中暂无书籍                             *\n");
			printf("*                                                                          *\n");
			printf("****************************************************************************\n");
			system("pause");
			break;
		}
		printf("****************************************************************************\n");
		printf("*                                                                          *\n");
		printf("*                         请输入您要删除的书的序号                         *\n");
		printf("*                                                                          *\n");
		printf("****************************************************************************\n");
		printf("*                                                                          *\n");
		printf("*                         若想使用浏览功能请输入0                          *\n");
		printf("*                                                                          *\n");
		printf("****************************************************************************\n");
		scanf("%d",&n);
		system("cls");
		if(n==0)
		{
			ll();
			system("cls");
		}
		else if(n<0||n>i)
		{
			printf("****************************************************************************\n");
			printf("*                                                                          *\n");
			printf("*                              查无此序号的书                              *\n");
			printf("*                                                                          *\n");
			printf("****************************************************************************\n");
			system("pause");
		}
		else
		{
			printf("*******************************************************************************\n\n");
			printf("%6d%14s%14s%14s%14s%8s%8.2f\n\n是否确认删除(yes/no)\n\n",n,books[n-1].sm,books[n-1].zzm,books[n-1].isbn,books[n-1].cbdw,books[n-1].cbnf,books[n-1].jg);
			scanf("%s",a);
			if(strcmp(a,"yes")&&strcmp(a,"no"))
			{
				printf("输入错误请重新输入\n");
				scanf("%s",a);
			}
			if(strcmp(a,"yes")==0) 
			{
				for(;n<i;n++)
				{
					strcpy(books[n-1].sm,books[n].sm);
					strcpy(books[n-1].zzm,books[n].zzm);
					strcpy(books[n-1].isbn,books[n].isbn);
					strcpy(books[n-1].cbdw,books[n].cbdw);
					strcpy(books[n-1].cbnf,books[n].cbnf);
					books[n-1].jg=books[n].jg;
				}
				i--;
			}
		}
		printf("\n是否继续删除(yes/no)\n\n");
		scanf("%s",a);
		if(strcmp(a,"yes")&&strcmp(a,"no"))
		{
			printf("输入错误请重新输入\n");
			scanf("%s",a);
		}
		system("cls");
	}while(strcmp(a,"yes")==0);
}
xg()/*修改*/
{
	int n;
	char a[4],sm[88],zzm[88],isbn[88],cbdw[88],cbnf[88];
	float jg;
	do{
		if(i<1)
		{
			printf("****************************************************************************\n");
			printf("*                                                                          *\n");
			printf("*                             该系统中暂无书籍                             *\n");
			printf("*                                                                          *\n");
			printf("****************************************************************************\n");
			system("pause");
			break;
		}
		printf("****************************************************************************\n");
		printf("*                                                                          *\n");
		printf("*                         请输入您要修改的书的序号                         *\n");
		printf("*                                                                          *\n");
		printf("****************************************************************************\n");
		printf("*                                                                          *\n");
		printf("*                         若想使用浏览功能请输入0                          *\n");
		printf("*                                                                          *\n");
		printf("****************************************************************************\n");
		scanf("%d",&n);
		system("cls");
		if(n==0)
		{
			ll();
			system("cls");
		}
		else if(n<0||n>i)
		{
			printf("****************************************************************************\n");
			printf("*                                                                          *\n");
			printf("*                              查无此序号的书                              *\n");
			printf("*                                                                          *\n");
			printf("****************************************************************************\n");
			system("pause");
		}
		else
		{
			printf("*******************************************************************************\n\n");
			printf("%6d%14s%14s%14s%14s%8s%8.2f\n\n请输入更改后的信息\n\n",n,books[n-1].sm,books[n-1].zzm,books[n-1].isbn,books[n-1].cbdw,books[n-1].cbnf,books[n-1].jg);
			scanf("%s%s%s%s%s%f",sm,zzm,isbn,cbdw,cbnf,&jg);
			printf("\n是否确认更改信息(yes/no)\n\n");
			scanf("%s",a);
			if(strcmp(a,"yes")&&strcmp(a,"no"))
			{
				printf("输入错误请重新输入\n");
				scanf("%s",a);
			}
			if(strcmp(a,"yes")==0) 
			{
				strcpy(books[n-1].sm,sm);
				strcpy(books[n-1].zzm,zzm);
				strcpy(books[n-1].isbn,isbn);
				strcpy(books[n-1].cbdw,cbdw);
				strcpy(books[n-1].cbnf,cbnf);
				books[n-1].jg=jg;
			}
		}
		printf("\n是否继续修改(yes/no)\n\n");
		scanf("%s",a);
		if(strcmp(a,"yes")&&strcmp(a,"no"))
		{
			printf("输入错误请重新输入\n");
			scanf("%s",a);
		}
		system("cls");
	}while(strcmp(a,"yes")==0);
}
smcx()/*书名查询*/
{
	int n,j,k,num[88],t=0;
	char a[88];
	printf("********************************************************************************\n");
	printf("\n书名查询\n请输入你需要查询的字段\n"); 
	scanf("%s",a);
	for(n=0;n<i;n++)
	{
		for(k=0;books[n].sm[k]!='\0';k++)
		{
			for(j=0;j<strlen(a);j++)
				if(books[n].sm[k+j]!=a[j])
					break;
			if(j==strlen(a))
			{
				num[t]=n;
				t++;
				break;
			}
		}
	}
	for(n=0;n<t;n++)
		for(j=n+1;j<t;j++)
			if(strcmp(books[num[n]].sm,books[num[j]].sm)>0)
			{
				k=num[n];
				num[n]=num[j];
				num[j]=k;
			}
	for(n=0;n<t;n++)
	{
		printf("%6d%14s%14s%14s%14s%8s%8.2f\n",num[n]+1,books[num[n]].sm,books[num[n]].zzm,books[num[n]].isbn,books[num[n]].cbdw,books[num[n]].cbnf,books[num[n]].jg);
		printf("********************************************************************************\n");
	}
	system("pause");
}
zzcx()/*作者查询*/
{
	int n,j,k,num[88],t=0;
	char a[88];
	printf("********************************************************************************\n");
	printf("\n作者查询\n请输入你需要查询的字段\n"); 
	scanf("%s",a);
	for(n=0;n<i;n++)
	{
		for(k=0;books[n].zzm[k]!='\0';k++)
		{
			for(j=0;j<strlen(a);j++)
				if(books[n].zzm[k+j]!=a[j])
					break;
			if(j==strlen(a))
			{
				num[t]=n;
				t++;
				break;
			}
		}
	}
	for(n=0;n<t;n++)
		for(j=n+1;j<t;j++)
			if(strcmp(books[num[n]].zzm,books[num[j]].zzm)>0)
			{
				k=num[n];
				num[n]=num[j];
				num[j]=k;
			}
	for(n=0;n<t;n++)
	{
		printf("%6d%14s%14s%14s%14s%8s%8.2f\n",num[n]+1,books[num[n]].sm,books[num[n]].zzm,books[num[n]].isbn,books[num[n]].cbdw,books[num[n]].cbnf,books[num[n]].jg);
		printf("********************************************************************************\n");
	}
	system("pause");
}
cbscx()/*出版社查询*/
{
	int n,j,k,num[88],t=0;
	char a[88];
	printf("********************************************************************************\n");
	printf("\n出版社查询\n请输入你需要查询的字段\n"); 
	scanf("%s",a);
	for(n=0;n<i;n++)
	{
		for(k=0;books[n].cbdw[k]!='\0';k++)
		{
			for(j=0;j<strlen(a);j++)
				if(books[n].cbdw[k+j]!=a[j])
					break;
			if(j==strlen(a))
			{
				num[t]=n;
				t++;
				break;
			}
		}
	}
	for(n=0;n<t;n++)
		for(j=n+1;j<t;j++)
			if(strcmp(books[num[n]].cbdw,books[num[j]].cbdw)>0)
			{
				k=num[n];
				num[n]=num[j];
				num[j]=k;
			}
	for(n=0;n<t;n++)
	{
		printf("%6d%14s%14s%14s%14s%8s%8.2f\n",num[n]+1,books[num[n]].sm,books[num[n]].zzm,books[num[n]].isbn,books[num[n]].cbdw,books[num[n]].cbnf,books[num[n]].jg);
		printf("********************************************************************************\n");
	}
	system("pause");
}
cbnfcx()/*出版年份查询*/
{
	int n,j,k,num[88],t=0;
	char a[88];
	printf("********************************************************************************\n");
	printf("\n出版社查询\n请输入你需要查询的字段\n"); 
	scanf("%s",a);
	for(n=0;n<i;n++)
	{
		for(k=0;books[n].cbnf[k]!='\0';k++)
		{
			for(j=0;j<strlen(a);j++)
				if(books[n].cbnf[k+j]!=a[j])
					break;
			if(j==strlen(a))
			{
				num[t]=n;
				t++;
				break;
			}
		}
	}
	for(n=0;n<t;n++)
		for(j=n+1;j<t;j++)
			if(strcmp(books[num[n]].cbnf,books[num[j]].cbnf)>0)
			{
				k=num[n];
				num[n]=num[j];
				num[j]=k;
			}
	for(n=0;n<t;n++)
	{
		printf("%6d%14s%14s%14s%14s%8s%8.2f\n",num[n]+1,books[num[n]].sm,books[num[n]].zzm,books[num[n]].isbn,books[num[n]].cbdw,books[num[n]].cbnf,books[num[n]].jg);
		printf("********************************************************************************\n");
	}
	system("pause");
}