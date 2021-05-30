# include <stdio.h>

int main ()
{
    int a ;
    printf("enter the year") ;
    scanf("%d",&a) ;

    if((a%400==0)||(a%4==0 && a%100!=0))
    printf("the year is leap") ;

    else
    printf("the year is not leap") ;

    return 0 ;

}