#include<stdio.h>
int main()

{

    int a,b ;

    printf("enter the class and sub failed") ;
    scanf("%d %d",&a,&b) ;

    switch(a)
    {

        case 1:
        if(b<=3)
        printf("5 marks") ;
        else
        printf("no grace") ;
        break ;

        case 2:
        if(b<=3)
        printf("4 marks") ;
        else
        printf("no grace") ;
        break ;

        case 3:
        if(b<=3)
        printf("5 marks") ;
        else
        printf("no grace") ;
        break ;

    }
    return 0 ;
}