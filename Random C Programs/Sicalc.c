/* simple interest calc */

# include <stdio.h>
int main()
{
    int p,n ;
    float si,r ;
    
    printf("Enter values for p n r") ;
    scanf("%d %d %f" ,&p ,&n ,&r) ;

    /* formula */

    si=p*n*r/100 ;
    printf("Simple interest is RS. %f\n" ,si) ;

    return 0 ;

} 