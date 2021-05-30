/* gross salary */

# include <stdio.h>

int main ()
{
    int s,d,h,g ;

    printf("Input Your Salary") ;
    scanf("%d",&s) ;

    /* calc */

    d=s*40/100 ;
    h=s*20/100 ;
    g=d+h ;

    printf("Your gross salary is Rs. %d" ,g) ;

    return 0 ;

}