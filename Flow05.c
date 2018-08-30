#include <stdio.h>

int main(void) {
	int  t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    int s=0;
	    scanf("%d",&n);
	    while(n!=0)
	    {
	        if(n>=100)
	        {
	            s=s+n/100;
	            n=n%100;
	        }
	        
	        else if(n>=50)
	        {
	            s=s+n/50;
	            n=n%50;
	        }
	        
	        else if(n>=10)
	        {
	            s=s+n/10;
	            n=n%10;
	        }
	        else if(n>=5)
	        {
	            s=s+n/5;
	            n=n%5;
	        }
	        else if(n>=2)
	        {
	            s=s+n/2;
	            n=n%2;
	        }
	        
	        else if(n>=1)
	        {
	            s=s+n/1;
	            n=n%1;
	        }
	    }
	    printf("%d\n",s);
	}
	return 0;
}

