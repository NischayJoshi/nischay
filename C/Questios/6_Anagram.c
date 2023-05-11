#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
	fgets(str1,20,stdin);
	char str2[20];
	fgets(str2,20,stdin);

    //Sorting 1st array

	for(int i=0;str1[i]!='\0';i++)
	{
		for(int j=1;j<strlen(str1)-i-1;j++){
		char temp;
		if(str1[j-1]>str1[j])
		{
			temp=str1[j];
			str1[j]=str1[j-1];
			str1[j-1]=temp;
		}}
	}
	
	//Sorting 2nd array

	for(int i=0;str2[i]!='\0';i++)
	{
		for(int j=1;j<strlen(str2)-i-1;j++){
		char temp;
		if(str2[j-1]>str2[j])
		{
			temp=str2[j];
			str2[j]=str2[j-1];
			str2[j-1]=temp;
		}}
	}

	//comparing
	if(strcmp(str1,str2)==0)
	{
		printf("ANAGRAM");
	}
	else
	{
		printf("Not an anagram");
	}
}