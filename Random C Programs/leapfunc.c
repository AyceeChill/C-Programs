#include<stdio.h>
void leap(int);
int main()
{

    int y ;

    printf("enter a year") ;
    scanf("%d",&y) ;

    leap(y) ;
    return 0 ;

}

void leap(int x)
{

    if((x%400==0)||(x%4==0 && x%100!=0))
    {
        printf("the year is leap") ;
    }
    else
    {
        printf("the year is not leap") ;
    }

}