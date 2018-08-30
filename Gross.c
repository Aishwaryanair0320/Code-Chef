#include <stdio.h>
int main()
{
 int sal,t;
 scanf("%d",&t);
 while(t--)
 {
    scanf("%d",&sal);
     sal<1500?printf("%.2f\n",sal+sal*0.1+sal*0.9):printf("%.2f\n",sal+500+sal*0.98);


 }
return 0;
}
 
