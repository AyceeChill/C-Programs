#include<stdio.h>
int main()
{

    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}} ;
    int i,j,temp=0 ;

    printf("the programmed matrix\n") ;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",a[i][j]) ;
        }

        printf("\n") ;
    }

    printf("the swapped matrix\n") ;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i<j)
            {
                temp=a[i][j] ;
                a[i][j]=a[j][i] ;
                a[j][i]=temp ;

            }
        }

        printf("\n") ;
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",a[i][j]) ;
        }

        printf("\n") ;
    }

    return 0 ;
            
}