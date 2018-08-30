#include <stdio.h>

int main(void) {
	int t,a,b;
	int r;
	scanf("%d",&t);
	while(t--)
	{
	 scanf("%d%d",&a,&b);
	 r=a%b;
	printf("%d\n",r);
}
	return 0;
}
