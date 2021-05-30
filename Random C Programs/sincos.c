# include <stdio.h>
# include <math.h>

int main()

{

    int a,s,t,q ;

    printf("enter the angle") ;
    scanf("%d",&a) ;

    t=sin(a)*sin(a) ;
    q=cos(a)*cos(a) ;

    s=t+q ;

    if(s==1)
    printf("yes the sum is one") ;

    else
    printf("the sum is not one") ;

    return 0 ;

}