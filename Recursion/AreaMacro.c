#include<stdio.h>
#include"AREA.h"
int main()
{

    int a,b,r,s,q,side,x,y,z ;

    printf("choose an option\n") ;
    printf("1.area of circle\n2.area of square\n3.area of rectangle\n4.area of triangle\n") ;
    scanf("%d",&q) ;

    switch(q)
    {

        case 1: printf("enter the radius\n") ;
                scanf("%d",&r) ;
                printf("the area of circle is %f",AREA_CIRCLE(r)) ;
                break ;

        case 2: printf("enter the side\n") ;
                scanf("%d",&side) ;
                printf("the area of square is %d",AREA_SQUARE(side)) ;
                break ;

        case 3: printf("enter the Length and height\n") ;
                scanf("%d %d",&a,&b) ;
                printf("the area of rectangle is %d",AREA_REC(a,b)) ;
                break ;

        case 4: printf("enter the sides\n") ;
                scanf("%d %d %d",&x,&y,&z) ;
                printf("the area of triangle is %f",AREA_TRI(x,y,z)) ;
                break ;

        default : printf("enter a valid value") ;

    }

    return 0 ;
    
}