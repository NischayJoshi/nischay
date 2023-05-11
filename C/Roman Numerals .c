#include<stdio.h>
int romanise(int a,int b,char c)
{
	for(int i=1;i<=(a/b);i++)
	{
		printf("%c",c);
	
	}
		return a%b;
}
void main()
{
	int year ;
	printf("Enter the year : ");
	scanf("%d",&year);
	year=romanise(year,1000,'M');
	year=romanise(year,500,'D'); 
	year=romanise(year,100,'C');
	year=romanise(year,50,'L');
	year=romanise(year,10,'X');
	year=romanise(year,5,'V');
	year=romanise(year,1,'I');
}

