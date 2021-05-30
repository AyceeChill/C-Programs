#include<stdio.h>
int main()
{
    int a ;

    for(a=0;a<=23;a++)
    {
        if(a==0)
        {
            printf("12 Midnite\n") ;
        }
        continue ;
        
        else 
        if(a<12)
        {
            printf("%d AM\n",a) ;
        }
        else
        if(a==12)
        {
            printf("12 Noon\n",a) ;
        }
        else
        if(a>12)
        {
            printf("%d PM\n",a) ;
        }

    }
    return 0 ;
}