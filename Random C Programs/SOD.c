# include <stdio.h>
# include <math.h>
int main()
{
    int a,r,s=0,t ;

    printf("enter the number") ;
    scanf("%d",&a) ;
    
    while(a!=0)
    {
        r=a%10 ;
        s=s+r ;
        a=a/10 ;
    }
    printf("the sum of the digits is %d",s) ;
    return 0 ;
}