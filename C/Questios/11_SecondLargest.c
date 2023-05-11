#include<stdio.h>
int main()
{
	int n;
	printf("Number of elements in array : ");
	scanf("%d",&n);
	int arr[n];
	int* ptr=arr;

	for(int i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			int temp;
			if (*(ptr+j)<*(ptr+j+1))
			{
                temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
	
	printf("Second largest number : %d",*(ptr+1));

}