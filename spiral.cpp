#include<stdio.h>
int main()
{
	int i,j,n,p,l,m;
	printf("enter n value");
	scanf("%d",&n);
	float k=01;
	int a[n][n];
	for(i=0; i<(n+1)/2; i++)
	{
	for(j=i; j<n-i; j++)
	a[i][j]=k++;
	for(p=i+1; p<n-i; p++)
	a[p][n-i-1]=k++;
	for(l=n-2-i; l>=i; l--)
	a[n-i-1][l]=k++;
	for(m=n-2-i; m>=i+1; m--)
	a[m][i]=k++;
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	printf("%f ",a[i][j]);
	}
	printf("\n");
}
}

