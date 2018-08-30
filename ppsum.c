int main(void) {
	int t,sum=0;
	scanf("%d",&t);
	while(t--)
	{
	    int d,n;
	    scanf("%d%d",&d,&n);
	    
	    
	    for(int i=1;i<=d;i++)
	    {    sum=0;
	        for(int j=1;j<=n;j++)
	        {
	       
	         sum=sum+j;
	          
	        }
	      n=sum;
	    }
	    
	
	
	   printf("%d\n",sum);
	} 
	   

	return 0;
}


