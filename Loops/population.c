#include<stdio.h>
int main()
{
    int a ;
    float p=100000 ;

    for(a=1;a<=10;a++)
    {
        p=p-p*0.1 ;
        printf("%f",p) ;
    }
    return 0 ;
}