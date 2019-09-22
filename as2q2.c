/*By:Yash Mudgal(I.T)
Date:09/09/2019*/
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,dist;
printf("enter coordinates as (a,b) and (c,d)\n");
scanf("%f\n%f\n%f\n%f",&a,&b,&c,&d);
dist=sqrt(pow((c-a),2)+pow((d-b),2));
printf("distance between points is = %f",dist);
}
