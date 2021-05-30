#include<stdio.h>

int fact(int x)
{

   if(x)
   return(x*fact(x-1)) ;

   else
   return(1) ;
  
}

int main()
{

    int n ;

    printf("enter a number") ;
    scanf("%d",&n) ;

    printf("the factorial is %d",fact(n)) ;

    return 0 ;

}
