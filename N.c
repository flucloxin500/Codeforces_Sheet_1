#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){

    char ch ;

    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n", ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c\n", ch - 32);
    } 
    
    

    
return 0;
}