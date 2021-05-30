#include<stdio.h>
int main()
{

    int a,r,s,n,p ;

    printf("enter the number of rows") ;
    scanf("%d",&r) ;

    for(a=0;a<=r;a++)
    {
        for(s=0;s<=r-a;s++)
        {
            printf(" ") ;
        }
        n=1 ;
        for(p=0;p<=a;p++)
        {
            printf("%d ",n) ;
            n=n*(a-p)/(p+1) ;
        }
       printf("\n") ; 
    }
    return 0 ;
}