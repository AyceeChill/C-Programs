/* Km converter */

# include <stdio.h>

int main()
{
    
    float a,m,i,c,f ;

    printf("Enter the distance in Km") ;
    scanf("%f" ,&a) ;
    m=a*1000 ;
    f=a*3280.84 ;
    i=a*39370.08 ;
    c=a*100000 ;
    
    printf("The distance is \n %f meters \n %f Feet \n %f Inches \n %f Centimeters" ,m,f,i,c) ;

    return 0 ;


}