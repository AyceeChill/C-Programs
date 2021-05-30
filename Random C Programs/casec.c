#include<stdio.h>
int main()

{

    int a ;

    while(a!=4)
    {
        printf("choose an option\n1.facto of no\n2.prime or not\n3.odd or even\n4.exit") ;
        scanf("%d",&a) ;

        switch(a)
       {
        case 1:
        printf("facto section") ;
        break ;

        case 2:
        printf("prime section") ;
        break ;

        case 3:
        printf("odd or even section") ;
        break ;

        case 4:
        printf("exit") ;
        break ;
       }
    }
    return 0 ;
}