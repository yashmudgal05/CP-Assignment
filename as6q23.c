/*By:Yash Mudgal
Date:16/09/2019*/
#include<stdio.h>
main()
{
	int i,j=20,k;
	for(i=1;i<=6;i++)
	{
		for(k=1;k<=i;k++)
		printf("%c",++j+64);
		j=j-i*2-1;
		printf("\n");
	}
}
