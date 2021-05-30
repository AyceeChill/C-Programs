#include<stdio.h>
#define N 5
int main()
{

    int i,num[N],j,temp=0 ;

    printf("enter the numbers\n") ;

    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]) ;
    }

    j=N-1 ;

    for(i=0;i<j;i++)
    {
        if(i%2!=0)
        {
            while(j>i)
            {
                if(j%2==0)
                {
                    temp=num[i] ;
                    num[i]=num[j] ;
                    num[j]=temp ;

                    j-- ;
                    break ;
                }

                j-- ;

            }

        }
       
    }

    printf("the sorted array is\n") ;

    for(i=0;i<N;i++)
    {
        printf("%d\n",num[i]) ;
    }

    return 0 ;
}