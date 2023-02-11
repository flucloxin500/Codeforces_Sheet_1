#include <stdio.h>

int main () {

    long long X,Y,a,b,c;
    scanf("%lld %lld", & X, &Y);
    a = X + Y;
    b = X * Y;
    c = X - Y;

    printf("%lld + %lld = %lld\n", X,Y,a);
    printf("%lld * %lld = %lld\n", X,Y,b);
    printf("%lld - %lld = %lld\n", X,Y,c);




return 0;
}
