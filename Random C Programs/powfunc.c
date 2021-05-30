#include<stdio.h>
#include<math.h>
int power(int x,int y) ;
int main()
{

    int n,p,s ;

    printf("enter the number and power") ;
    scanf("%d %d",&n,&p) ;

    s=power(n,p) ;
    printf("the powered number is %d",s) ;
    return 0 ;

}
int power(int x,int y)
{

    int z ;

    z=pow(y,x) ;
    return(z) ;
    
}