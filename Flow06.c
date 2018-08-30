#include <stdio.h>

int main(void) {
    int t,r,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int s=0;
        while(n!=0)
        { 

        r=n%10;
        s=s+r;
        n=n/10;
        
        }
         printf("%d\n",s);
    }
	
	return 0;
}
