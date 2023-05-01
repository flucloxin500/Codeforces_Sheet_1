#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){

    char ch;

    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\n");
        
        printf("IS CAPITAL\n");
    }
    
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("ALPHA\n");
        
        printf("IS SMALL\n");
    }

    else if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }
return 0;
}