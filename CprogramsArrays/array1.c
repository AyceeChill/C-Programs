#include<stdio.h>
void disp(int) ;
int main()
{

    int i ;
    int num[10] ;
    int a ;


  for(i=0;i<=9;i++)
  {
    printf("enter a number\n") ;
    scanf("%d",&num[i]) ;
  }

  printf("array entered is\n") ;

  for(i=0;i<=9;i++)
    disp(num[i]) ;

  return 0 ;

}
void disp(int x)
{

    printf("%d",x) ;

}