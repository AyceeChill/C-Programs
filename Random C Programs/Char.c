# include <stdio.h>

int main ()
{
    int a ;
    printf("enter the character") ;
    scanf("%d",&a) ;

    if(a>=65 && a<=90)
    printf("the character is uppercase") ;

    else
    if(a>=97 && a<=122)
    printf("the character is uppercase") ;

    else
    if(a>=48 && a<=57)
    printf("the character is a number") ;

    else
    if((a>=0 && a<=47)||(a>=58 && a<=64)||(a>=91 && a<=96)||(a>=123 && a<=127))
    printf("the character is special symbol") ;

    return 0 ;
    
}