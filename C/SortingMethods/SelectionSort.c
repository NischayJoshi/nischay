// Selection Sort 
#include<stdio.h>
int main()
{
    printf("Selection Sorting\n\n");
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements iof array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    };
    
    int temp=0,min=0;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    
    printf("Sorted array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    };
}