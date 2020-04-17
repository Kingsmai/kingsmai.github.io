/*
    Name:
    Copyright:
    Author:Xiaomai
    Date: 10/31/2019 7:14:25 PM
    Description:
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double p,q,x1,x2,disc,a,b,c;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    p=-b/(2.0*a);
    if(disc>0)
    {
        q=(sqrt(disc))/(2.0*a);
        x1=p+q;
        x2=p-q;
        printf("\nx1=%lf\tx2=%lf",x1,x2);
    }
    else if(disc==0)
    {
        x1=p;
        printf("\nx1=x2=%lf",x1);
    }
    else if(disc<0)
    {
        disc=-disc;
        q=(sqrt(disc))/(2.0*a);
        printf("\nx1=%lf+%lfi",p,q);
        printf("\nx2=%lf-%lfi",p,q);
    }
    return 0;
}

