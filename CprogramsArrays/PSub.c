#include<stdio.h>
int main()

{

    int arr[]={10,20,30,45} ;
    int *j,*i ;

    i=&arr[1] ;
    j=&arr[2] ;

    printf("%ld %d\n",j-i,*j-*i) ;

    return 0 ;

}