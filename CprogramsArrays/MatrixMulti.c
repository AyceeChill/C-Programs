#include<stdio.h>
#include<math.h>
#define N 50
int main()
{

    int a[N][N],b[N][N],c[N][N] ;

    int i,j,k ;

    int r,col,br,bcol ;

    int sum=0 ;

    printf("Note that the number of rows and columns of both matrix must be equal\n \n \n \n") ;

    printf("enter the number of rows and columns of matrix a\n") ;
    scanf("%d %d",&r,&col) ;

    printf("enter the elements of matrix a\n") ;

    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]) ;
        }

    }

    printf("enter the number of rows and columns of matrix b\n") ;
    scanf("%d %d",&br,&bcol) ;

    printf("enter the elements of matrix b\n") ;

    for(i=0;i<br;i++)
    {
        for(j=0;j<bcol;j++)
        {
            scanf("%d",&a[i][j]) ;
        }

    }
   
    /* calc */

    for(i=0;i<r;i++)
    {
        for(j=0;j<bcol;j++)
        {
            for(k=0;k<br;k++)
            {
                sum+=a[i][k]*b[k][j] ;
            }

            c[i][j]=sum ;
            sum=0 ;
        }

    }

    printf("the multiplied matrix is\n") ;

    for(i=0;i<r;i++)
    {
        for(j=0;j<bcol;j++)
        {
        printf("%d ",c[i][j]) ;
        }

        printf("\n") ;
    }

    return 0 ;

}