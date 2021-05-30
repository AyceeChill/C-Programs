/* Fahrenhite to celcius */

# include <stdio.h>

int main()
{
    float a,b ;

    printf("Enter the Temp in F") ;
    scanf("%f",&a) ;
    b=a-32/1.8 ;
    printf("the temp in celcius is %f",b) ;
    return 0 ;
    
}