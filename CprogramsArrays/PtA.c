#include<stdio.h>
#define N 5
int main()
{

    int i,a[N][2],*p,j ;

    for(i=0;i<N;i++)
    {
        printf("Enter values of row and column\n") ;
        scanf("%d %d",&a[i][0],&a[i][1]) ;
    }

    printf("printing the array\n") ;

    for(p=&a[0][0];p<=&a[i-1][j-1];p++)
    {
        printf("%d \n",*p) ;
    }

    return 0 ;

}