#include<stdio.h>
int main()
{

    struct books
    {
        char name[15] ;
        int price ;
        int page ;
        
    } ;

    struct pp
    {
        char author[15] ;
        struct books b ;
    } ;
    
    struct pp p={"xyz","A",455,100} ;

    

    printf("Author ---- %s\n",p.author) ;
    printf("Book ---- %s\n",p.b.name) ;
    printf("Price ---- %d\n",p.b.price) ;
    printf("Page ---- %d\n",p.b.page) ;
    

    
    return 0 ;
    
}