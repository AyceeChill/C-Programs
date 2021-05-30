#include<stdio.h>
int main()
{

   int count=1,num=1 ;
   float fact=1,sum=0.0 ; 

   while(count<=7)
   {
       for(num=1;num<=7;num++)
       {
           fact=fact*num ;
       }

       sum=sum+count/fact ;
       count ++ ;
   }
   
     printf("%f\n",sum) ;
     return 0 ;

}