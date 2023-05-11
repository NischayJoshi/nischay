#include <stdio.h>
int main()
{ 
    int start,end;
    printf("Enter Range : ");
    scanf("%d%d",&start,&end);
    printf("Prime Numbers in the given range : \n");
    for(int i=start;i<=end;i++)
    {
    	int flag=0;
    	for(int j=2;j<i;j++)
    	{
    		if (i%j==0)          
			{
			    flag=1;
			    break;
			}
    		
		}
		if (flag==1) continue;
		printf("%d\n",i);      //To Print The Prime Number 
	}
}

