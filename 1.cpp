#include<stdio.h>
int main()
{
	int i,n,m,M,x;
	printf("enter n value \n");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
	M=a[1];
	m=a[0];
	for(i=0; i<n; i++)
	{
		if(m>a[i])
		{
			m=a[i];
			
		}		
	}
	for(i=0; i<n; i++)
	{
		if(M<a[i])
		{
			M=a[i];
			
		}		
	}
	x=0;
	for(i=0;i<n;i++)
	x+=a[i];
	printf("max value is %d \n",M);
	printf("min value is %d \n",m);
	printf("avg value is %d",x/n);
	return 0;
	
	
}
