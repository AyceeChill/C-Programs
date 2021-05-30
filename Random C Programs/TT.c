#include<stdio.h>
#include<math.h>
int main()
{
 int num,r,s,p,z=1 ;

 printf("enter number of rows\n") ;
 scanf("%d",&num) ;

 for(r=1;r<=num;r++)
 {
   for(s=num-1;s>=r;s--)
   {
       printf(" ") ;
   }
   for(p=1;p<=z;p++)
   {
       printf("% ",) ;
    
   }
   z=z+1 ;
   printf("\n") ;
 }
 return 0 ;

}





















