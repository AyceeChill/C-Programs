#include<stdio.h>
int main()
{

    int uey,iyr=1900,diff ;
    int leap=0,td,day,a ;

    printf("Enter Year to check the day of 1st jan\n") ;

    scanf("%d",&uey) ;

    diff=uey-iyr ;

    while(iyr<uey)
    {
        if(iyr%100==0)
        {
            if(iyr%400==0)
        {
        leap++ ;
        }

        }

        else if(iyr%4==0)
        {
            leap++ ;
        }

        iyr++ ;
    }

    td=(diff-leap)*365+leap*366 ;
    day=td%7 ;

    switch(day)
    {
        case 0:
        printf("monday") ;
        break ;

        case 1:
        printf("tuesday") ;
        break ;

        case 2:
        printf("wednesday") ;
        break ;

        case 3:
        printf("thursday") ;
        break ;

        case 4:
        printf("friday") ;
        break ;

        case 5:
        printf("saturday") ;
        break ;

        case 6:
        printf("sunday") ;
        break ;
    }

 return 0 ;

}