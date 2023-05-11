#include<stdio.h>
int main()
{
    char str[100];
	printf("ENter the string : ");
	fgets(str,100,stdin);

	for(int i=65;i<=122;i++)
	{
		if (i>90&&i<97) continue;
        int count=0;
		for(int j=0;str[j]!='\0';j++)
		{
			if(str[j]==i)
			{
				count++;
			}
		}
		if (count==0) continue;
		printf("%c occurs : %d times.\n",i,count);
	}
}