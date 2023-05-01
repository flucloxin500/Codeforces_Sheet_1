#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){

    int X , rem;
    scanf("%d", &X);
    rem = X / 1000;

    if ( rem % 2 == 0)
    {
        printf("EVEN\n");
    }
    else if ( rem % 2 != 0)
    {
        printf("ODD\n");
    } 
    
    

    
    


return 0;
}