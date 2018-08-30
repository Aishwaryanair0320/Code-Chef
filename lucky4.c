#include <stdio.h>

int main() {
	int t;
	
	scanf("%d",&t);
	while(t--) {
	    int count = 0;
	    int n;
	    scanf("%d",&n);
	    int m=0;
	    
	    while(n != 0) {
	        m = n % 10;
	        if(m == 4) {
	            count++;
	            
	        }
	            n = n/10;
	        }
	    printf("%d\n",count);
	    
	}  
return 0;
}
