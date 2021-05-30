# include <stdio.h>
int main()

{
    int c,j,n,b ;

    printf("enter the years") ;
    scanf("%d %d",&c,&j) ;

    n=c-j ;

    if(n>3)

        b=2500 ;
        
    printf("bonus is %d",b) ;
    return 0 ;
}