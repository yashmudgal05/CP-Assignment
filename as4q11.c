/*By:Yash Mudgal
Date:12/09/2019*/
#include<stdio.h>
void main()
{
	int i=0;
	for(;i<100;i++)
	if((i%10+i/10)%7==0)
	printf("%d ",i);
}
