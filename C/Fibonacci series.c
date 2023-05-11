#include<stdio.h>
int main()
{
	int n,i;
	printf("Number of terms in Fibonacci series : ");
	scanf("%d",&n);
	int n1=1,n3=1,temp;
	printf("Fibonacci series : \n%d ",0);
	printf("%d ",n1);
	for(i=n;i>2;i--)
	{
		
		printf("%d ",n3);
		temp=n3;
		n3+=n1;
		n1=temp;
		
		
	}
}
