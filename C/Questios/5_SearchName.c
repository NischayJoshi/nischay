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
	char search[15];
	printf("Enter the name you wanna search : ");
	fgets(search,15,stdin);
    int flag=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(names[i],search)==0)
		{
            flag++;
			break;
		}
	}
	if(flag==0)
	{
		printf("Not Found");
	}
	else{
		printf("FOUND");
	}
}