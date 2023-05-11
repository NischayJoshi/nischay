#include<stdio.h>

int fact(int n)
{
	int pd=1;
	for(int i=1;i<=n;i++)
	{
		pd*=i;
	}
	return pd;
}
void main()
{
	int n,r;
	printf("Enter n and r for nCr : \n");
	scanf("%d%d",&n,&r);
	printf("%d",fact(n)/(fact(n-r)*fact(r)));
}

