#include <stdio.h>

int main(void) {
	
	 int n;
	 int count1=0,count2=0;
	 scanf("%d",&n);
	 int a[n];
	 for(int i=0;i<n;i++)
	 {
	     scanf("%d",&a[i]);
	     if(a[i]%2==0)
	     {
	         count1++;
	     }
	     else
	     {
	         count2++;
	     }
	}
	 if(count1>count2)
	 {
	     printf("READY FOR BATTLE\n");
	 }
	 else if(count2>count1)
	 {
	     printf("NOT READY\n");
	}
	else
	printf("NOT READY\n");
	
	return 0;
	}



