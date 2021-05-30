#include<stdio.h>
int fact(int) ;
int main()
{

    int n,f ;

    printf("enter a number") ;
    scanf("%d",&n) ;
    f=fact(n) ;
    printf("the factorial of the number is %d",f) ;
    return 0 ;

}
int fact(int x)
{

    int f=1,a ;
    if(x==0)
    return(1) ;
    else
    for(a=1;a<=x;a++)
    f=f*a ;

    return(f) ;
}
