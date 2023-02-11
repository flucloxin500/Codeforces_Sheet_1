#include <stdio.h>
#include <math.h>

int main (){

    long long N , M;
    scanf("%lld%lld", &N ,&M);
    N = N%10;
    M = M%10;

    printf("%d", N + M);


    return 0;
}
