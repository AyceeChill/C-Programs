#include<stdio.h>
#define N 5
int main()
{
    int a[N][5],i,j,l ;

    for(i=0;i<N;i++)
    {
        printf("Enter the rows and collums element\n") ;
        scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]) ;
    }

    printf("printing the greatest number form the matrix\n") ;

    l=a[0][0] ;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(a[i][j]>l)
            {
                l=a[i][j] ;
            }
        }

    }

    printf("%d",l) ;

    return 0 ;
    
}