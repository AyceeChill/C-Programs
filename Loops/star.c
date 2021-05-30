#include<stdio.h>
int main()
{

    int num,r,s,a,p ;

    printf("enter number of rows") ;
    scanf("%d",&num) ;

    for(r=1;r<=num;r++)
    {
        for(s=num-1;s>=r;s--)
        {
            printf(" ") ;
        }

        for(p=1;p<=a;p++)
        {
            printf("* ") ;
        }
        
        a++ ;
        printf("\n") ;
    }
    return 0 ;

}