#include <stdio.h>
int main(void)
{
    int n1,n2,t;
    scanf("%d",&t);
    while(t--){
     scanf("%d %d",&n1,&n2);
     if(n1>n2)
     printf(">\n");
     else if(n1<n2)
     printf("<\n");
     else if(n1=n2)
     printf("=\n");
    }
    return 0;

} 
