/*By:Yash Mudgal(I.T)
Date:11/09/2019*/
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
printf("enter three numbers\n");
scanf("%f\n%f\n%f",&a,&b,&c);
if(a==b)
   printf("odd number is %f\n",c);
if(a==c)
   printf("odd number is %f\n",b);
if(b==c)
   printf("odd number is %f\n",a);
}

