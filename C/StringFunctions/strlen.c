#include<stdio.h>
#include<string.h>
int slength(char* p);
int main()
{
    char s[100];
    printf("Enter the string : ");
    fgets(s,100,stdin);
    char* ptr=s;
    int length=slength(ptr);
    printf("Length os the string is : %d",length);
}
int slength(char* p)
{
    int i=0,sum=0;
    while(*(p+i)!='\0')
    {
        sum++;
        i++;
    }
    return sum;
}