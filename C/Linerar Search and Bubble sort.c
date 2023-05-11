#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number of elemets in array : ");
	scanf("%d",&n);
	int arr[n];
	//Taking array input
	printf("Enter the elements : ");
	for(i=0;i<n;i++ )
	{
		scanf("%d",&arr[i]);
	}
	//printing the array
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	//Ascending sorting the array using bubble sort
	int temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1]) 
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//printing the array in ascending order
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	//doing binary search
	int k;
	while(1!=0){
		
	printf("Enter the digit to search in the array : ");
	scanf("%d",&k);
	printf("\n");
	
	int mid,low=0,high=n,flag=0;

	do 
	{   
	
		mid=(low+high)/2;
		printf("[%d , %d , %d]\t",low,mid,high);
		if (arr[mid]==k) 
		{
			flag+=1;
			break;
		}
		else if (arr[mid]<k)
		{
			low=mid+1;
		}
		else
		{
			high=mid;
		}
		
	}while(low!=high);
	if (flag!=0) printf("\nElement Found !\n\n");
	else printf("\nELement NOT Found !\n\n");
}
	
}
