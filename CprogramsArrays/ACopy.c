#include<stdio.h>
#define N 5
int main()
{
    int a[N],b[N],i,j,temp=0 ;

    printf("Enter a Array of %d numbers\n",N) ;

    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf("copying\n") ;

    for(i=0;i<N;i++)
    {
        b[i]=a[i] ;
    }

    printf("reversing\n") ;

    j=N-1 ;

    for(i=0;i<j;i++)
    {
        while(j>i)
        {

        temp=b[i] ;
        b[i]=b[j] ;
        b[j]=temp ;

        j-- ;

        break ;

        }

    }

    printf("the entered array ----> copied array\n") ;
    for(i=0;i<N;i++)
    {
        printf("%d \t\t  ----> %d\n",a[i],b[i]) ;
    }

    return 0 ;

}