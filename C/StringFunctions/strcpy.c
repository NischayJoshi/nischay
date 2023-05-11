#include<stdio.h>
#include<string.h>
void copy(char* ptr , char str[]);
int main()
{
    char str1[100], str2[100];
    printf("Enter first String : ");
    fgets(str1,100,stdin);
    printf("Enter second string : ");
    fgets(str2,100,stdin);
    char* ptr=str1;
    copy(ptr,str2);
    printf("%s",str1);
}
void copy(char* ptr,char str[])
{
    int i=-1;
    do
    {   i++;
        *(ptr+i)=str[i];
    } while (str[i]!='\0');
}