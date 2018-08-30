#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int i;
	    int a,sum;
	    int count=0;
	    for(i=1;i<=n;i++)
	    {   scanf("%d",&a);
	    sum=a+k;
	        if(sum%7==0)
	        {
	            count++;
	        }
	   
	    }
	    printf("%d\n",count);
	}
	return 0;
}
