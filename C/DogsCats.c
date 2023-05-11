#include <stdio.h>

	//HOWS YOUR SON BRO 


int main(void) {
	int i,T;
	long int d,c,l;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
    	scanf("%ld%ld%ld",&c,&d,&l);
        if(l<=4*(c+d)&&(l%4==0))
        {
       	 if (c>2*d)
         {
        	if(l>=4*(d+(c-(2*d)))) printf("yes\n");
        	else printf("no\n");
		 } 
		 else if (c<=2*d)
		 {
			if(l>=4*d) printf("yes\n");
			else printf("no\n");
		 }
		 
	    }
	    else printf("no\n");
	}
}
