/*By: Yash Mudgal
Date:07/09/2019*/
#include<stdio.h>
void main()
{
int a,m,n;
printf("enter a no.\n");
scanf("%d",&a);
m=a%10;
a=a/10;
n=a%10;
printf("sum of last two digits is = %d\n",m+n);
}
