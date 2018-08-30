#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int l;
	    int temp;
	    int sum=0;
	    temp=n;
	    while(temp>=10)
	    {
	        temp=temp/10;
	    }
	    l=n%10;
	    sum=temp+l;
	    printf("%d\n",sum);
	    
	}
	return 0;
	
}

