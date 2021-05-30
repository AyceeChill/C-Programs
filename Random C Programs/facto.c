#include<stdio.h>
int main()
{

    int a,f=1,b=1 ;

    printf("enter the value") ;
    scanf("%d",&a) ;

    while(b<=a)
    {
        f=f*a ;
        b++ ;
    }

    printf("the factorial is %d",f) ;
    return 0 ;
}