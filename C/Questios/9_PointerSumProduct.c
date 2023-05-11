#include<stdio.h>
int main()
{
	int a,b;
    printf("Enter a and b : ");
	scanf("%d%d",&a,&b);
	int* ptr1;
	int* ptr2;
	ptr1=&a;
	ptr2=&b;

	printf("Sum of variables using pointers : %d\n",*ptr1+*ptr2);
	printf("Product of variables using pointers : %d",*ptr1 * *ptr2);
}