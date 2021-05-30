#include<stdio.h>
#include<math.h>
int main()
{

    int a[3][3]={
                 {1,2,3},
                 {5,6,7},
                 {3,4,2},
                } ;

    int b[3][3]={
                 {1,2,3},
                 {5,6,7},
                 {3,4,2},
                } ;

    int i,j,sum=0,k,c[3][3] ;

    /* calc */

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum+=a[i][k]*b[k][j] ;
            }

            c[i][j]=sum ;
            sum=0 ;
        }

    }

    printf("the multiplied matrix is\n") ;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d ",c[i][j]) ;
        }

        printf("\n") ;
    }

    return 0 ;

}