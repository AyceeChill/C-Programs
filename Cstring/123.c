#include<stdio.h>
int main()
{

    char a[100] ;
    int i,n=0,c,l ;

    printf("enter the string\n") ;
    
    gets(a) ;

    for(i=0;a[i]!='\0';i++)
    {
        c=a[i]-48 ;
        n=n*10+c ;
    }

    printf("%d",n) ;

    return 0 ;

}