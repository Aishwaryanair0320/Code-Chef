#include <stdio.h>

int main(void) {
	 int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	     int a,b,c;
	     scanf("%d %d %d",&a,&b,&c);
	     
      if(a>b&&a>c)
   {
         if(b>c)
       {
           printf("%d\n",b);
           
       }
       else
       {
           printf("%d\n",c);
       }
   }
   if(b>a&&b>c)
   {
       if(a>c)
       {
           printf("%d\n",a);
       }
       else
       {
           printf("%d\n",c);
       }
   }
   if(c>a&&c>b)
 {
     if(a>b)
     {
         printf("%d\n",a);
     }
     else
     {
         printf("%d\n",b);
     }
 }
	 }
 return 0;
}
	 


