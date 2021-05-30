#include<stdio.h>
#define N 4
void prina(int q[][2], int, int) ;
int main()
{

    int i,a[N][2] ;


    for(i=0;i<N;i++)
    {
    printf("Enter the rows and collums of an array\n") ;
    scanf("%d %d",&a[i][0],&a[i][1]) ;
    }

    printf("printing roll numbers and marks\n") ;

    prina(a,i,2) ;

    return 0 ;

}
void prina(int q[][2],int x,int y)
{
    int row,col ;
    for(row=0;row<x;row++)
    {
        for(col=0;col<y;col++)
        {
            printf(" ") ;
            
            printf("%d ",q[row][col]) ;

            printf("\n") ;
        }

    }

    
}