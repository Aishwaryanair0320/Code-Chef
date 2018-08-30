#include <stdio.h>
int main(void) {
   int num,t;
   scanf("%d",&t);
   while(t--)
   {
     scanf("%d",&num);
     if(num<10)
     printf("What an obedient servant you are!\n");
     else
     printf("-1\n");
   }
   return 0;
}
  
