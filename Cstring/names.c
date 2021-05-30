#include<stdio.h>
#include<string.h>
#define F 1
int main()
{

    char a[6][10]={
                   "Atharv",
                   "and",
                   "Komal",
                   "loves",
                   "each",
                   "other"
                  } ;
    char b[10] ;

    int c,i,f ;

    printf("Enter name\n") ;

    scanf("%[^\n]%*c",b) ;

    for(i=0;i<6;i++)
    {
        c=strcmp(&a[i][0],b) ;

    if(c==0)
    {
        printf("Atharv and Komal loves each other.") ;
        f=F ;
        break ;
    }
    }
    if(f!=F)
    {
        printf("Love is immortal.") ;
    }
    
    return 0 ;

}