#include <stdio.h>
#include<math.h>
 
int main(void) {
   int t,sum,p,i,j,n,m,a;
   scanf("%d",&t);
   while(t--){
    scanf("%d %d",&n,&m); 
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    p=pow(2,n);
    a=0;
    for(i=1;i<p;i++)
    {
      sum=0;
      for(j=0;j<n;j++)
       {
          if(i&(1<<j))
          sum=sum+A[j];
       }
       if(sum==m)
       a=1;
    }
    if(a==1)
    printf("Yes\n");
    else
    printf("No\n");
   }
   return 0;
}
