#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    for(int i=0;i<strlen(str);i++)
    {
		if(i%2==0)
		{
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
        }
		
        printf("%c",str[i]);
    }
    
}