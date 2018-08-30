#include <stdio.h>
int main(void) {
   int h,te,t,a,b,c,d;
   float ca;
   scanf("%d",&t);
   while(t--)
  {
  a=0;b=0;c=0;
  scanf("%d %f %d",&h,&ca,&te);
  if(h>50)
  a=1;
  if(ca<0.7)
  b=1;
  if(te>5600)
  c=1;
  if(a==1)
  {
    if(b==1)
    {
      if(c==1)
      d=10;
      else
      d=9;
    }
    else if(c==1)
    d=7;
    else
    d=6;
  }
  else if(b==1)
  {
    if(c==1)
    d=8;
    else
    d=6;
  }
  else if(c==1)
  d=6;
  else
  d=5;
  printf("%d\n",d);
  }
  return 0;
}
