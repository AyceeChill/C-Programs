#include<stdio.h>
void prime(int) ;
int main()
{

    int n ;

    printf("enter a number") ;
    scanf("%d",&n) ;

    prime(n) ;

    return 0 ;

}
void prime(int x)
{
    int f ;

    for(f=2;x>1;f++)
    {
    while(x%f==0)
    {
       printf("%d",f) ;
       x=x/f ;
    }

    }

}