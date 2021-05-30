#include<stdio.h>
int stringlen(char[]) ;
int main()
{
    int l ;
    char a[100] ;

    printf("Enter string\n") ;
    scanf("%s",a) ;

    l=stringlen(a) ;

    printf("The string length is\n%d",l) ;

    return 0 ;

}
int stringlen(char x[])
{
    int i,l ;
    
    while(x[i]!='\0')
    {
        i++ ;
        l++ ;
    }

    return(l) ;

}