#include<stdio.h>
int  main (){

    long long a,b,c,d,rem,sum;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);


    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    
    
    sum = a*b*c*d ;

    rem = sum % 100 ;

    if ( rem < 9)
    {
        printf("0%lld", rem);
    }

    else
    
    printf("%lld", rem);
    
    return 0;
}