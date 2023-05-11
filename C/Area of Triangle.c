#include<stdio.h>
#include<math.h>
float area(float a,float b,float c)
{
	float s=(a+b+c)/2;
	if(a<=0||b<=0||c<=0||a+b<c||a+c<b||b+c<a)
	{
		return 0;
	}
	else
	{
	    return(sqrt(s*(s-a)*(s-b)*(s-c)));
	}
}
void main()
{
	float f,g,h;
	printf("Enter the sides of triangle : ");
	scanf("%f%f%f",&f,&g,&h);
	printf("Area of the triangle = %f",area(f,g,h));
}
