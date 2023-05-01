#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){

    int A,B;
    char ch ;
    scanf("%d%c%d", &A,&ch,&B);

    if ( ch == '+' )
    {
        printf("%d", A+B);
    }
    else if ( ch == '-' )
    {
        printf("%d", A-B);
    }
    else if ( ch == '*' )
    {
        printf("%d", A*B);
    }
    else if ( ch == '/' )
    {
        printf("%d", A/B);
    }
return 0;
}