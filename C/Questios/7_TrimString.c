#include<stdio.h>
#include<string.h>
void charrem(char arr[]);
int main()
{
    char str[50];
	printf("ENter the string : ");
	fgets(str,50,stdin);
	printf("Modified string : \n");
	charrem(str);
}

void charrem(char arr[])
{
	for(int i=0;arr[i]!='\0';i++)
	{
		for(int j=i;j<strlen(arr)-1;j++)
		{
			if(arr[j+1]==arr[i])
			{
				arr[j+1]='~';
			}
		}
	}
	char str[50];
	int j=0;
    for(int i=0;arr[i]!='\0';i++)
	{
		if (arr[i]=='~') continue;
		else
		{
			str[j]=arr[i];
			j++;
		}
	}
    str[j]='\0';
	printf("%s",str);
}