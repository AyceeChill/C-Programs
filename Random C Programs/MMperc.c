/* marks percentage */

# include <stdio.h>

int main()
{
    int m,c,p,e,pe,a ;
    float b ;
    printf("enter your marks of each subjects in following order \n Maths Chemistry Physics English Physical") ;
    scanf("%d %d %d %d %d",&m,&c,&p,&e,&pe) ;
    
    a=m+c+p+e+pe ;
    b=a/5 ;
    printf("Your Aggregated marks are %d",a) ;
    printf("And your percentage is %f",b) ;
    return 0 ;
}