# include <stdio.h>

int main()
{
    int h,t ;
    float c  ;
    printf("enter the values in following order Hard CC TS") ;
    scanf("%d %f %d",&h,&c,&t) ;

    if(h>50 && c<0.7 && t>5600)
    printf("grade 10") ;
    
    if(h>50 && c<0.7 && t<5600)
    printf("grade 9") ;

    if(h<50 && c<0.7 && t>5600)
    printf("grade 8") ;

    if(h>50 && c>0.7 && t>5600)
    printf("grade 7") ;

    if((h>50 && c>0.7 && t<5600)||(h<50 && c<0.7 && t<5600)||(h<50 && c>0.7 && t>5600))
    printf("grade 6") ;

    else
    printf("grade 5");

    return 0 ;
    
    }