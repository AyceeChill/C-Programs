# include <stdio.h>
# include <math.h>
int main()

{

    int a,b,c ;
    printf("enter the sides") ;
    scanf("%d %d %d",&a,&b,&c) ;
    
    if(a==b && b==c && a==c)
    printf("the triangle is equilateral") ;

    if((a==b && a!=c && b!=c)||(b==c && b!=a && c!=a)||(a==c && a!=b && c!=b))
    printf("the triangle is isoscales") ;

    if((a>b && a>c && a=sqrt(b*b+c*c)||(b>a && b>c && b=sqrt(a*a+c*c)||(c>a && c>b && c=sqrt(a*a+b*b))
    printf("the triangle is right angled") ;

    if(a!=b && a!=c && b!=c)
    printf("the triangle is scalene") ;
    
    return 0 ;
    
}