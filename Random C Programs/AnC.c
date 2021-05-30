/* area and circumfrence */
# include <stdio.h>

int main()
{
    int a,b,c,r,p ;
    float o,g ;

    printf("Enter the L and B of Rectangle and R of Circle") ;
    scanf("%d %d %d", &a, &b, &c) ;

    r=a*b ;
    p=2*a+2*b ;
    o=22/7*r*r ;
    g=2*22/7*r ;

    printf("the area and perimeter of rectangle is %d\n%d",r,p) ;
    printf("the area and perimeter of circle is %f\n%f",o,g) ;
    return 0 ;

}