#include<stdio.h>
int main()
{
    int i=0 ;
    char a[100] ;

    printf("Enter string\n") ;
    scanf("%s",a) ;

    while(a[i]!='\0')
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32 ;
        }

        i++ ;

    }

    printf("%s",a) ;
}