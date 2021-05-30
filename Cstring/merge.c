#include<stdio.h>
#include<string.h>
int main()
{
    int la,lb,i ;
    char a[100],b[100] ;

    printf("Enter string a\n") ;
    scanf("%s",a) ;

    printf("Enter string b\n") ;
    scanf("%s",b) ;

    la=strlen(a) ;
    lb=strlen(b) ;

    for(i=0;i<=lb;i++)
    {
        a[la+i]=b[i] ;
    }
    
    printf("The merged string is\n")
    printf("%s",a) ;

    return 0 ;

}