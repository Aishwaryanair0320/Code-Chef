#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(void)
{
  int i,j,n,temp=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  qsort(a, n, sizeof(int), cmpfunc);
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
} 
