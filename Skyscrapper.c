#include <stdio.h>
int main(void) {
  long long int m,t,a,n;
  scanf("%lld",&t);
  while(t--){
      scanf("%lld %lld",&m,&n);
      if(m>n)
      a=m-n;
      else
      a=n-m;
      printf("%lld\n",a);
  }
  return 0;
}
 
