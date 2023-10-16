#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("enter n value");
	scanf("%d",&n);
	for (i=0; i<n ; i++)
	{
		for(s=0 ; s< i+2 ; s++)
		printf(" ");
		for(j=0; j< n; j++)
		printf("* ");
		printf("\n");
	}
}
