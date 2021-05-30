#include<stdio.h>
#include<math.h>
int main()
{

    int x,a,b,sum=0,n=0 ;

    printf("enter a value") ;
    scanf("%d",&x) ;


    for(a=1;a<=7;a++)
    {

       if(a==1)
       {
           b=x-1/x ;
       }
       else
       {
           sum=1/2*pow(sum,n+1)+b ;
           n=n+1 ;
       }

     printf("%d",sum) ;


    }
    return 0 ;
}