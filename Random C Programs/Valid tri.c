# include <stdio.h>
int main()

{
    int a,b,c ;
    printf("enter the sides") ;
    scanf("%d %d %d",&a,&b,&c) ;

    if(a>b && a>c && a<b+c)
    printf("the triangle is valid") ;

    if(b>a && b>c && b<a+c)
    printf("the triangle is valid") ;

    if(c>a && c>b && c<a+b)
    printf("the triangle is valid") ;

    else
    printf("the triangle is invalid") ;

    return 0 ;
    
}