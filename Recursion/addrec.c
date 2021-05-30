#include<stdio.h>

int rec(int x) 
{

    if(x)
    {
    return((x%10)+rec(x/10)) ;
    }
    else

    return 0 ;

}

int main()
{

    int n ;

    printf("enter a five digit number") ;
    scanf("%d",&n) ;

    printf("the sum of the digits is %d",rec(n)) ;

    return 0 ;

}
