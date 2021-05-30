#include<stdio.h>
#define N 5
int main()
{
    int i ;
    int num[N] ;
    int a,c ;

    printf("enter a array of %d numbers\n",N) ;

    for(i=0;i<N;i++)
   {

    scanf("%d",&num[i]) ;

   }

    printf("enter the number you want to search\n") ;
    scanf("%d",&a) ;

  for(i=0;i<N;i++)
  {

    if(num[i]==a)
    {
    printf("the number %d is present %d position\n",a,i) ;
    c++ ;
    }

  }

  printf("it occurs %d times\n",c) ;

  return 0 ;

}
