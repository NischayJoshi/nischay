
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter string here :\n");
	fgets(str,100,stdin);
	int start,howmany;
	printf("Enter the starting index : ");
	scanf("%d",&start);
	printf("Enter how many characters to extract : ");
	scanf("%d",&howmany);

	for(int i=start;i<start+howmany;i++)
	{
		printf("%c",str[i]);
	}
}