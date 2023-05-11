//Bubble Sorting

#include<stdio.h>
int main()
{
    pintf("Bubble Sorting\n\n");
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements iof array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    };
    
    int temp=0,m=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        m--;
    }
    
    printf("Sorted array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    };
}