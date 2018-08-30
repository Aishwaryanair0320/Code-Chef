#include <stdio.h>

int main(void) {
	  int t;
	  scanf("%d",&t);
	  while(t--)
	  {
	    int n;
	    scanf("%d",&n);
	    int r;
	    int rev=0;
        while(n!=0)
	    {
	        r=n%10;
	        n=n/10;
	        rev=rev*10+r;
	        
	        
	    }
	    printf("%d",rev);
	    printf("\n");
	  }
	return 0;
}
