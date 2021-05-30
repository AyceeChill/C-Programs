#include<stdio.h>
int main()
{
    int a=1,f,x=0,y=0 ;

    while(a<=500)
    {
        a=y ;
        while(y)
        {
            f=y%10 ;
            x=x+f*f*f ;
            y=y/10 ;
        }
            a++ ;

    }
    if(a==x)
    printf("the armstrong no is %d",a) ;
    return 0 ;
}