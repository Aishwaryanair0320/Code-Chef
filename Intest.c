#include <stdio.h>

int main(void) {
    long  k,a=0,x;
    int n;
    int cnt=0;
    scanf("%d%ld",&n,&k);
    while(n--)
    {
        scanf("%ld",&x);
            if(x%k==0)
            {
               cnt=cnt+1; 
            }
            
    }
    printf("%d",cnt);
	// your code goes here
	return 0;
}

