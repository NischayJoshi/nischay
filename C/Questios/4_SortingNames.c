#include<stdio.h>
#include<string.h>
int main()
{
    int n;
	printf("How many names you wanna enter : ");
	scanf("%d",&n);
	getchar();
	char names[n][15];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d name : ",i+1);
		fgets(names[i],15,stdin);
	}
	for(int i=0;i<n-1;i++)
	{
		char temp[15];
		for(int j=0;j<n-i-1;j++)
		{
			if (strcmp(names[j],names[j+1])>0)
			{
				strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
				strcpy(names[j+1],temp);
			}
		
		}
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d) %s",i+1,names[i]);
	}
}