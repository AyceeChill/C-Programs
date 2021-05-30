#include<stdio.h>
int main()
{
  
  int a=1,n=300 ;

  
  for(a=1;a<=n-1;a++)
  {
      if(a%n==0)
      
          break;
      
      else
      if(a==n)
      
          printf("%d\n",a) ;
    
  }
  return 0 ;
}