#include<stdio.h>
struct stdata
{
    int yoj ;
    char name[10] ;
    char course[10] ;
    int rollno ;
}D[450]={2001,"A","Btech",001,
         2001,"B","Mtech",002,
         2001,"B","Bsc",003,
         2002,"C","Bca",004,
         2002,"C","Btech",005,
         2004,"A","Bca",006,
         2005,"D","Bca",007
        } ;

void sby(int year)
{
    int i ;
        printf("NAME----COURSE----ROLL.NO\n") ;
    for(i=0;i<450;i++)
    {
    if(D[i].yoj==year)
    {
        printf("%s-------%s------%d\n",D[i].name,D[i].course,D[i].rollno) ;
    }
    }
}
void sby2(int roll)
{
    int i ;
        printf("NAME----COURSE----YEAR\n") ;
    for(i=0;i<450;i++)
    {
    if(D[i].rollno==roll)
    {
        printf("%s-------%s------%d\n",D[i].name,D[i].course,D[i].yoj) ;
    }
    }
}

int main()
{
    int year,roll ;
    printf("Enter the Year of joining of student.\n") ;
    scanf("%d",&year) ;
    printf("The list of students of entered year.\n") ;
    sby(year) ;

    printf("Enter Roll.No of student.\n") ;
    scanf("%d",&roll) ;
    printf("The list of students of entered year.\n") ;
    sby2(roll) ;

    return 0 ;

}