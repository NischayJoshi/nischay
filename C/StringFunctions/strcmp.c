#include<stdio.h>
int compare(char* ptr1 , char* ptr2);
int main()
{
    char str1[100],str2[100];
    printf("Enter the first string  : ");
    fgets(str1,100,stdin);
    printf("Enter the second string : ");
    fgets(str2,100,stdin);
    char *ptr1=str1, *ptr2=str2;
    int cmp=compare(ptr1,ptr2);
    if (cmp==0)
    {
        printf("Strings are same.");
    }
    else
    {
        printf("Strings are not same.");
    }
}
int compare(char* ptr1,char* ptr2)
{
    int i=0;
    do
    {
        if(*(ptr1+i)!=*(ptr2+i))
        {
            return 1;
        }
        i++;
    } while (*(ptr1+i)!='\0');
    return 0;
}