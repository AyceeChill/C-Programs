#include<stdio.h>
int main()
{

    int a=21,b,c=0 ;

        printf("matchsticks %d\n",a) ;
        printf("pick up 1 2 3 or 4 matches\n") ;
        scanf("%d",&b) ;
while(1)
    {
        if(b>4 && b==0)
        continue ;

        a=a-b ;
        printf("matches left %d\n",a) ;

        c=5-b ;

        printf("computer chose %d\n",c) ;

        a=a-c ;

        printf("matches left %d\n",a) ;

        if(a==1)
        {
            printf("matches left %d you loose\n",a) ;
            break ;
        }
        printf("pick again\n") ;
        scanf("%d",&b) ;

    }
    return 0 ;
}