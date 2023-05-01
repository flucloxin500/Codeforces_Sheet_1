#include<stdio.h>
#include<math.h>
int  main (){

    int x , ye , mo , da ;
    scanf("%d", &x);
    ye = x / 365 ;
    x = x % 365 ;
    mo = x / 30 ;
    x = x % 30 ;
    printf("%d years\n", ye);
    printf("%d months\n", mo);
    printf("%d days\n", x);
    
    return 0;
}