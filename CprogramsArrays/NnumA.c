#include<stdio.h>
int main()
{

    int n,arr[100],i ;

    printf("Enter the total number of Array\n") ;
    scanf("%d",&n) ;

    printf("enter the elements of array\n") ;

    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]) ;
    }

    printf("printing the number of arrays\n") ;

    for(i=0;i<=n;i++)
    {
        if(arr[i]==arr[n-(i+1)])
        {     
            
            printf("element no. %d = %d\n",i,arr[i]) ;

        }

    }

    return 0 ;

}