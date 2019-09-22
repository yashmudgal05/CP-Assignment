/*By:Yash Mudgal
Date:12/09/2019*/
#include<stdio.h>
void main()
{
	int i;
	printf("Numbers divisible by either 3 or 7");
	for(i=3;i>0;i++)
	if(i%3==0&&i%7==0)
	continue;
	else if(i%3==0||i%7==0)
	printf("%d ",i);
}
