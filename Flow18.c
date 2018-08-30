#include <stdio.h>

int main(void) {
	int i;
	int t,n,fact;
	scanf("%d",&t);
	while(t--)
	{
	    fact=1;
	    scanf("%d",&n);
	     for(i=1;i<=n;i++)
	     {
	      fact=fact*i;
	     }
	    
	  printf("%d\n",fact);
	}



	// your code goes here
	return 0;
}

