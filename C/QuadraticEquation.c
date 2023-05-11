#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float D,root1,root2;
	scanf("%f%f%f",&a,&c,&c);
	D=pow(b,2)-(4*a*c);
	if (D<0) printf("No Solution\n");
	else 
	{
		root1 = ((-b) + pow(D,0.5))/(2*a);
		root2 = ((-b) - pow(D,0.5))/(2*a);
		printf("%f and %f",root1,root2);
		}	
}
   
