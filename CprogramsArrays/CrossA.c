#include<stdio.h>
#define N 5
int main()

{

    int a1[N],i,k,a2[N],temp=0,j,l ;

    printf("enter a array of %d numbers A1\n",N) ;

    for(i=0;i<N;i++)
    {
        scanf("%d",&a1[i]) ;
    }

    printf("enter a second array of %d numbers A2\n",N) ;

    for(i=0;i<N;i++)
    {
        scanf("%d",&a2[i]) ;        
    }

    printf("reversing\n") ;
    
    j=N-1 ;
    
    for(i=0;i<=N;i++)
    {
        while(j>=i)
        {

        temp=a1[i] ;
        a1[i]=a2[j] ;
        a2[j]=temp ;

        j-- ;

        break ;

        }
        
    }

    printf("the reversed and exchanged arrays are\n") ;

    for(i=0;i<N;i++)
    {
    printf("A1 %d    A2 %d\n",a1[i],a2[i]) ;
    }

    return 0 ;

}