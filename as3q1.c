/*By:Yash Mudgal(I.T)
Date:11/09/2019*/
#include<stdio.h>
void main()
{
int a,b,c,max;
printf("enter 3 numbers\n");
scanf("%d\n%d\n%d",&a,&b,&c);
max=a;
if(b>max)
   max=b;
if(c>max)
   max=c;
printf("greatest nos = %d\n",max);
}
