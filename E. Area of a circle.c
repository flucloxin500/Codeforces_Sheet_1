#include <stdio.h>
#include <math.h>

int main (){

    double pie,R,x;

    pie = 3.141592653;

    scanf("%lf", &R);
    x = pow(R, 2);

    printf("%.9lf",pie * x);

    return 0;
}
