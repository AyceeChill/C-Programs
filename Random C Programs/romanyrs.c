#include<stdio.h>
void roman(int) ;
int main()
{

    int y ;

    printf("enter a year") ;
    scanf("%d",&y) ;

    roman(y) ;

    return 0 ;

}
void roman(int x)
{

    while(x)
    {
        if(x>=1000)
        {
        printf("M") ;
        x=x-1000 ;
        }
        else
        if(x>=500)
        {
        printf("D") ;
        x=x-500 ;
        }
        else
        if(x>=100)
        {
        printf("C") ;
        x=x-100 ;
        }
        else
        if(x>=50)
        {
        printf("L") ;
        x=x-50 ;
        }
        else
        if(x>=10)
        {
        printf("X") ;
        x=x-10 ;
        }
        else
        if(x>=5)
        {
        printf("V") ;
        x=x-5 ;
        }
        else
        if(x>=1)
        {
        printf("I") ;
        x=x-1 ;
        }

    }

}