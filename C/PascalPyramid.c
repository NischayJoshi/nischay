#include<stdio.h>
int num;

void pascal(int len,int arr[]);
int main()
{
    printf("Enter the Column Index of Pyramid : ");
    scanf("%d",&num);

    if (num==0)
    {
        printf("1");
    }
    else if (num==1)
    {
        printf("1 1");
    }
    else 
    {
        int len=2;
        int arr[]={1,1};
        pascal(len , arr);
    }
}
void pascal(int len,int arr[])
{
    int arr2[len+1];
    arr2[0]=1;
    arr2[len]=1;
    for(int i=0;i<len-1;i++)
    {
        arr2[i+1]=arr[i]+arr[i+1];
    }
    len++;
    if (len==num+1)
    {
        for(int i=0;i<len;i++)
        {
            printf("%d ",arr2[i]);
        }
    }
    else 
    {
        pascal(len,arr2);
    }
}