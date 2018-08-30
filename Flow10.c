#include <stdio.h>


int main(void) {
	int t;
	char x;
	scanf("%d",&t);
	while(t--)
	{
	    
	    scanf(" %c ",&x);
        if(x=='B'|| x=='b')
        {
            printf("BattleShip");
        }
        else if(x=='C'|| x=='c')
        {
            printf("Cruiser");
        }
        else if(x=='D'|| x=='d')
        {
            printf("Destroyer");
        }
        else if(x=='F'|| x=='f')
        {
            printf("Frigate");
        }
        printf("\n");
    
	    }

	return 0;
}


