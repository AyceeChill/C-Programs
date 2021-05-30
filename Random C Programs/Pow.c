#include<stdio.h>
int main()
{

    int a,b,x=1,p=1,q=1,y=1 ;

    printf("enter the numbers") ;
    scanf("%d %d",&a,&b) ;

    while(x<=b)
    {
        p=p*a ;
        x++ ;
    }
    while(y<=a)
    {
        q=q*b ;
        y++ ;
    }

    printf("powers are %d and %d",p,q) ;
    return 0 ;

}