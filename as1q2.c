/*By: Yash Mudgal
Date:07/09/2019*/
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,sum=0,m,n;
printf("enter no. whose square and whose cube to be added\n");
scanf("%d%d",&a,&b);
m=pow(a,2);
n=pow(b,3);
sum=m+n;
printf("%d+%d = %d\n",m,n,sum);
}
