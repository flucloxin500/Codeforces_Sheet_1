#include<stdio.h>
#include<math.h>
int  main (){

    int e1,s1,e2,s2, f = 0 , g = 0 ;
    scanf("%d %d %d %d", &s1 ,&e1 ,&s2 , &e2);

    if ( e1 < s2 || e2 < s1)
    {
        printf("-1\n");
    }
    else
    {
        if (s1 > s2)
        {
            f = s1 ;
        }
        else 
        f = s2;
        if ( e1 < e2 )
        {
            g = e1 ;
        }
        else
        g = e2 ;

        printf("%d %d\n", f , g);

    }
    
    return 0;
}