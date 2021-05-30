#include<stdio.h>
int main()
{

    int a,p=0,n=0,z=0,l=0 ;

  printf("enter the limit\n");
  scanf("%d",&l) ;
  printf("enter %d numbers\n",l);
  while(l)
 {
     scanf("%d",&a) ;
    
     if(a<0)
     {
       n++ ;
     }
         else
         if(a>0)
         {
            p++ ;
         }

         else
         if(a==0)
            {
                z++ ;
            }
            l-- ;
        
}

 printf("the positives are %d\n",p) ;
 printf("the negetives are %d\n",n) ;
 printf("the zeroes zre %d\n",z) ;
 return 0 ;

}