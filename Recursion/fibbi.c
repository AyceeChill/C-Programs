#include<stdio.h>
int fib(int x)
{

    if(x==1)
    
        return(0) ;

    else 
    if((x==2)||(x==3))
    
        return(1) ;
    
    else
    
        return(fib(x-1)+fib(x-2)) ;
    
}

int main()
{

    int l,c ;

    printf("enter the limit for fibbi") ;
    scanf("%d",&l) ;

    printf("the series is\n") ;
    for(c=1;c<=l;c++)
    {
    printf("%d. %d\n",c,fib(c)) ;
    }
    return 0 ;

}