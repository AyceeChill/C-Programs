#include<stdio.h>
int main()
{

    int a[3][3]={{1,2,3},{4,5,6},{6,7,8}} ;
    int b[3][3]={{12,13,14},{15,16,17},{18,19,20}} ;
    int i,j ;

    printf("Adding two matrix\n") ;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]+b[i][j]) ;
        }

        printf("\n") ;
    }

    return 0 ;

}