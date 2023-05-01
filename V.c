#include<stdio.h>
#include<math.h>
int  main (){

    int a,c ;
    char ch ;

    scanf("%d %c %d", &a , &ch , &c );

    if ( ch == '>' && a > c)
    {
        printf("Right\n");
    }
    else if ( ch == '>' && a <= c)
    {
        printf("Wrong\n");
    }
    else if ( ch == '<' && a < c)
    {
        printf("Right\n");
    }
    else if ( ch == '<' && a >= c)
    {
        printf("Wrong\n");
    }
    else if ( ch == '=' && a == c)
    {
        printf("Right\n");
    }
    else if ( ch == '=' && a != c)
    {
        printf("Wrong\n");
    }
    
    return 0;
}