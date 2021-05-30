#include<stdio.h>
#define N 5
void modify(int) ;
int main()

{

    int i,arr[N] ;

    printf("Enter the elements of array\n") ;

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]) ;
    }

    printf("the modified array is\n") ;

    for(i=0;i<N;i++)
    {
      modify(arr[i]) ;
    }

    return 0 ;
    
}
void modify(int i)
{
    printf("%d\n",i*3) ;
}