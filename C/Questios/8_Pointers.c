#include<stdio.h>
int main()
{
	int a=5;
	int* ptr=&a;

	printf("Address of a : %p\n",&a);
	printf("Address of ptr : %p\n",&ptr);
    printf("Value of a : %d\n",a);
    printf("Value of ptr : %p\n",ptr);
	printf("Value pointed by ptr : %d\n",*ptr);

}