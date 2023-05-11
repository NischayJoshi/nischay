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
	printf("\n");
	int current,flag;
    for(int i=1;i<n;i++)
	{
		current=arr[i];
		flag=i-1;
		while(arr[flag]>current && flag>=0)
		{
			arr[flag+1]=arr[flag];
			flag--;
		}
		arr[flag+1]=current;
		}	
	for(int i=0;i<n;i++) printf(" %d",arr[i]);
}
	

