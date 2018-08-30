#include <stdio.h>
    int main(void) {
    	int x,sum1=0,sum2=0;
    	scanf("%d",&x);
    	int c[x];
    	for(int i=1;i<=x;i++)
    	{
    	      scanf("%d",&c[i]);
    	      sum1=sum1+c[i];
    	      sum2=sum2+i;
    	      
    	  }
    	  if(sum1==sum2)
    	  printf("YES");
    	  else
    	  printf("NO");
    	  
    	
    return 0;	  
    	 } 

