#include<stdio.h>
#include<math.h>
int  main (){

    int a,b,c , sum , div , mul ;
    char x,y ;
    

    scanf("%d %c %d %c %d", &a , &x , &b , &y , &c );

    sum = a + b ;
    div = a - b ;
    mul = a * b ;

    if ( x == '+' )
    {
        if ( c == sum)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", sum);
        }
    }
    else if ( x == '-' )
    {
        if ( c == div)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", div);
        }
    }
    else if ( x == '*' )
    {
        if ( c == mul)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", mul);
        }
    }
    
    
    return 0;
}