/*By:Yash Mudgal
Date:12/09/2019*/
#include<stdio.h>
void main()
{
	int i;
	printf("Numbers divisible by 3 or 5:");
	for(i=3;1;i++)
	if(i%3==0&&i%5==0)
	continue;
	else if(i%3==0||i%5==0)
	printf("%d ",i);
}
