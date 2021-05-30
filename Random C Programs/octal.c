#include<stdio.h>
int main()
{

    int a,r=0,s=0,v=1 ;

    printf("enter a value\n") ;
    scanf("%d",&a) ;

    while(a)
{
    r=a%8 ;
    s=s+r*v ;
    a=a/8 ;
    v=v*10 ;
}
printf("the octal value is %d\n",s) ;
return 0 ;

}