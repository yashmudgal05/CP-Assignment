/*By:Yash Mudgal
Date:12/09/2019*/
#include<stdio.h>
void main()
{
	int i,j=0;
	for(i=1;i<100;i+=2,j+=2)
	if((i/10)%2==0)
	printf("%d ",i);
	else
	printf("%d ",j);
}
