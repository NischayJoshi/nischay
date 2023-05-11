#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch>64 && ch<91)
    {
    	ch=ch+32;
	}
	else if (ch>96 && ch<123)
	{
		ch=ch-32;
	}
    printf("%c",ch);
}
