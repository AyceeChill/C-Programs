#include<stdio.h>
int main()
{

    struct books
    {
        char name ;
        int price ;
        int pages ;
    } B1,B2,B3 ;

    printf("Enter the name,price and pages of 3 books\n") ;

    scanf("%c %d %d",&B1.name,&B1.price,&B1.pages) ;
    scanf("%c %d %d",&B2.name,&B2.price,&B2.pages) ;
    scanf("%c %d %d",&B3.name,&B3.price,&B3.pages) ;

    printf("You've entered\n") ;

    printf("%c %d %d\n",B1.name,B1.price,B1.pages) ;
    printf("%c %d %d\n",B2.name,B2.price,B2.pages) ;
    printf("%c %d %d\n",B3.name,B3.price,B3.pages) ;

    return 0 ;
    
}