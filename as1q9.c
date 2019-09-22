/*By: Yash Mudgal
Date:07/09/2019*/
#include<stdio.h>
void main()
{
int a,m;
printf("enter a no.\n");
scanf("%d",&a);
m=a%10;
a=a/100;
a=a*10+m;

printf("now no. is = %d\n",a);
}
