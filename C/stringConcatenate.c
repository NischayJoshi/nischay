#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200]={},str2[100]={};
	printf("Enter the first string : ");
	fgets(str1,100,stdin);
	printf("Enter the second string : ");
	fgets(str2,100,stdin);
    int n=strlen(str1)-1;
	int i=0;
	do
	{
		str1[n+i]=str2[i];
		i++;
	} while (str2[i]!='\0');
	printf("The concatenated string is : \n");
	printf("%s",str1);
}