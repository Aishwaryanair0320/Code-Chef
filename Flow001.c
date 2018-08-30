#include <stdio.h>

int main(void)
{
	int t,a,b,s=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&a,&b);
	    s=a+b;
	  	printf("%d\n",s);
	}
	return 0;
}

