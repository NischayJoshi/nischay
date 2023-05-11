#include<stdio.h>
int main()
{
	int i,num,j;
	scanf("%d",&num);
	int temp=num;
	for(i=1;i<=num;i++)
	{   
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		for(j=(temp*2)-2;j>0;j--)
		{
			printf(" ");
		}
		temp--;
		
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

}
