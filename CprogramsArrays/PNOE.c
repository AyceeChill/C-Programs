#include<stdio.h>
#define N 5
int main()
{

    int i,arr[N],neg,pos,odd,even ;

    printf("enter +ive and -ive integers\n") ;

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]) ;
    }

    for(i=0;i<N;i++)
    {
        if(arr[i]==0)
        {}
        else if(arr[i]<0)
        
            neg++ ;
        
        else if(arr[i]>0)
        
            pos++ ;
    
        if(arr[i]%2==0)
            
            even++ ;

        else
            
            odd++ ;

    }

    printf("the +ives are %d and -ives are %d and odds are %d and even are %d\n",pos,neg,odd,even) ;

    return 0 ;
}