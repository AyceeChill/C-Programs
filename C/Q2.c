#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 1000

int main() 
{
   char a[N] ;
   int l,i=0,n ;
   char j ;
   
   scanf("%[^\n]%*c",a) ;
   
   l=strlen(a) ;
   
   while(i<l)
   {
   if(a[i]==' ')
   {
       printf("\n") ;
   }
   else
   {
       printf("%c",a[i]) ;    
   }
   i++ ;
   
   }
     
    return 0;
}
