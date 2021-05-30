#include<stdio.h>
#include<math.h>
int main()
{

    int n,q,count ;
    float p,r,a=0.0 ;

    for(count=1;count<=10;count++)
    {

        printf("enter the value of p n r q") ;
        scanf("%f %d %f %d",&p,&n,&r,&q) ;

        r=r/100 ;
        a=p*pow(1+r/q,n*q) ;
        printf("compound interest is %f",a) ;
    }
    return 0 ;
}