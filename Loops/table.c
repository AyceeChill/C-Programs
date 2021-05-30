#include<stdio.h>
int main()
{

    int a,b,n=0,t=0 ;

    printf("enter a number") ;
    scanf("%d",&a) ;

    for(b=1;b<=10;b++)
    {
        n=b ;
        t=a*n ;
        printf("%d\n",t) ;
        
    }
    return 0 ;
}