#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main() 
{

    int n ;
    int i,j,k ;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    

      for(i=1;i<2*n;i++)
      {

            for(j=1;j<2*n;j++)
            {

                printf("%d ",max(abs(i-n),abs(j-n))+1) ;

            }
               
        printf("\n") ;
          
      }
      
      
      
      
      
    return 0;
}