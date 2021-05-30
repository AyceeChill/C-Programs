#include <stdio.h>
int main()
{

    int a,b=0,x,ot=0,totp=0,tot=0 ;

    while(a<=10)
    {
        printf("enter hours") ;
        scanf("%d",&x) ;
        ot=x-40 ;
        
        if(x>40)
        b=ot*12 ;   
        printf("the bonus is %d",b) ;

        else    
        printf("no bonus") ;
        
        a++ ;
    }
    tot=ot*10 ;
    totp=b*10 ;
    printf("total over time %d",tot) ;
    printf("total over time pay %d",totp) ;

    return 0 ;
    
}