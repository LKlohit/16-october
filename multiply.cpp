#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter value of n");
	scanf("%d",&n);
	int a[n][n] , b[n][n];
	for(i=0;i<n;i++)
	{
	
	for(j=0; j<n ; j++)
	{
	printf("enter a values");
	scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
 {
	for(j=0; j<n ; j++)
	{
	printf("enter b values");
	scanf("%d",&b[i][j]);
}
}
int c[n][n];
for(i=0;i<n;i++)
{
	for(j=0; j<n ; j++)
	{
	c[i][j] = a[i][j] + b[i][j] ;
}
}
for(i=0;i<n;i++)
{
	for(j=0; j<n ; j++)
	{
	 printf(" %d",c[i][j]);
}
printf("\n");
}




	
	
	
	
	return 0;
	
	
	
	
	
}
