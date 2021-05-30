#include<stdio.h>
#define N 5 
int main()
{
    int i,a[N],b,temp=0,count ;

    printf("enter the array of 5 elements\n") ;

    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("1<----choose the shift---->2\n") ;
    scanf("%d",&b) ;

    printf("Enter number of shifts\n") ;
    scanf("%d",&count) ;

    while(count)
    {

    if(b==1)
    {
        printf("left shift\n") ;

        temp=a[0] ;

        for(i=0;i<N;i++)
        a[i]=a[i+1] ;

        a[N-1]=temp ;
          
    }
    else
    {
        printf("right shift\n") ;

        temp=a[N-1] ;

        for(i=N-1;i>0;i--)
        a[i]=a[i-1] ;

        a[0]=temp ;

    }

        count-- ;

    }
        for(i=0;i<N;i++)
        {
            printf("%d \t",a[i]) ;
        }

          return 0 ; 

}