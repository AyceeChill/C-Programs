# include <stdio.h>
int main()

{

    int a,da,hra,gs ;

    printf("enter the salary") ;
    scanf("%d",&a) ;

    if (a<1500)
    {
        hra=a*10/100 ;
        da=a*90/100 ;
    }    
    else
    {
        hra=a+500 ;
        da=a*98/100 ;
    
    }
    gs=hra+da+a ;

    printf("the gross salary is %d",gs) ;
    return 0 ;

}