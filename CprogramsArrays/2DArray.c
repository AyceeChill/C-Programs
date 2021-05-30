#include<stdio.h>
#define N 5
int main()
{
    int i,arr[N][2] ;

    for(i=0;i<N;i++)
    {
        printf("Enter the roll number and marks\n") ;

        scanf("%d %d",&arr[i][0],&arr[i][1]) ;
    }

    printf("Roll No. ------- Marks\n") ;

    for(i=0;i<N;i++)
    {
        printf("%d ----------- %d\n",arr[i][0],arr[i][1]) ;
    }

    return 0 ;

}