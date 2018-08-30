#include <stdio.h>

int main(void) {
    char str[20];
    scanf("%s",str);
    int l;
    l = strlen(str);
    int n;
    n = l*25+26;
    printf("%d",n);
	return 0;
}

