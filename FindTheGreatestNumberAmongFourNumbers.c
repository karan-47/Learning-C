#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,d,e,f,g;
	printf("enter the four no.s\n");
	fflush(stdout);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=a>b?a:b;
	f=e>c?e:c;
	g=f>d?f:d;
	printf("the greatest no is %d",g);
	return 0;

}
