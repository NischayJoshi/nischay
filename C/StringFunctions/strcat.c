#include<stdio.h>
void concat(char* ptr, char str[]);
int main()
{
    char str1[100],str2[50];
    printf("Enter first string: ");
    fgets(str1,50,stdin);
    printf("Enter second string: ");
    fgets(str2,50,stdin);
    char* ptr=str1;
    concat(ptr,str2);
    printf("%s",str1);
}
void concat(char* ptr,char str[])
{
    int i=-1,len=0;
    while(*(ptr+len)!='\n') len++;
    do
    {
        i++;
        *(ptr+len)=str[i];
        len++;
    } while (str[i]!='\0');
    
}