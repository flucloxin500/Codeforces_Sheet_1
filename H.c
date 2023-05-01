#include <stdio.h>
#include <math.h>


int main (){

    int A , B , fl , ro , ce ;
    scanf("%d %d", &A , &B);
    fl = floor ((double)A/B) ;
    ro = round ((double)A/B) ;
    ce = ceil ((double)A/B) ;

    printf("floor %d / %d = %d\n", A , B ,fl);
    printf("ceil %d / %d = %d\n", A , B ,ce);
    printf("round %d / %d = %d\n", A , B ,ro);

    

return 0;
}