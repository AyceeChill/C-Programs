# include <stdio.h>
int main()

{
    int p,n,c  ;
    float si,r  ;

    c=1 ;

    while(c<=3)
    {
        printf("enter the value of pnr") ;
        scanf("%d %d %f",&p,&n,&r) ;

        si=p*n*r/100 ;

        printf("simple interest is %f",si) ;

        c=c+1 ;

    }

  return 0 ;


}