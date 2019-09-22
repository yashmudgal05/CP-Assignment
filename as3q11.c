/*By:Yash Mudgal(I.T)
Date:11/09/2019*/
#include<stdio.h>
void main()
{
float a,b,c;
printf("enter three numbers\n");
scanf("%f\n%f\n%f",&a,&b,&c);
if(a>b)
     {
     if(b>c)
        printf("middle no. is = %f\n",b);
     else 
     if(a>c)
        printf("middle no. is = %f\n",c);
     else 
        printf("middle no. is = %f\n",a);
     }
else
     {
     if(a>c)  
        printf("middle no. is = %f\n",a);
     else
     if(b>c)
        printf("middle no. is = %f\n",c);
     else
        printf("middle no. is = %f\n",b);
     }   
}

