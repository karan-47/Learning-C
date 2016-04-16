#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float  a,b,c;
    printf("enter distance in km");
    scanf("%f",&a);
    b=1000*a;
    c=100000*a;
    printf("%fkm=%fm",a,b);
    puts("");
    printf("%fkm=%fcm",a,c);
    puts("");
    

    return 0;
}

