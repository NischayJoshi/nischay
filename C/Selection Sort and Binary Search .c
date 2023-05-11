#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("ENter %d elements in array : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min,temp;
	for( int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if (arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(int j=0;j<10;j++)
	{
	int find,flag=0;
	printf("\nEnter the element we have to find : ");
	scanf("%d",&find);
	
	int low=0,high=n-1,mid;
	while(low<=high && low >=0)
	{
		mid=(low+high)/2;
	    if(arr[mid]==find)
		{
		    flag+=1;
			break;	
		}	
		else if (arr[mid]>find)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	 
	} 
	if(flag==1)
	{
		printf("Element FOUND !");
	}
	else
	{
		printf("Element NOT FOUND !");
	}
	
}
}

