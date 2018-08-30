#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,m;
	    scanf("%d %d ",&a,&b);
	    if(a>b)
	    {
	        printf("%d\t",a);
	    }
	    else
	    {
	        printf("%d\t",b);
	    }
	    m=a+b;
	    printf("%d\t",m);
	}
	return 0;
}
