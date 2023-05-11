#include<stdio.h>
char* schr(char* ptr,char ch);
int main()
{
    char str[50] , ch;
    printf("Enter the string : ");
    fgets(str,50,stdin);
    printf("Enter the character : ");
    scanf("%c",&ch);
    char* ptr=str;
    char* p=schr(ptr,ch);
    printf("%s",p);
}
char* schr(char* ptr,char ch)
{
    int i=0;
    while((*(ptr+i)!=ch)&&(*(ptr+i)!='\0'))
    {
        i++;
    }
    if(*(ptr+i)=='\0') return NULL;
    return (ptr+i);
}