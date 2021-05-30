#include<stdio.h>
struct empdata
{
    int code ;
    char name[10] ;
    int doj[3] ;
}D[7]={
       1234,"A",3,5,2000,
       1233,"B",8,6,2001,
       1232,"C",24,9,2002,
       1231,"D",15,6,2003,
       1230,"E",1,3,2004,
       1229,"F",2,12,2005,
       1228,"G",12,4,2006
      } ;

int main()
{
    int i ;
    int yr ;

    printf("Enter current year.\n") ;
    scanf("%d",&yr) ;

        for(i=0;i<7;i++)
        {
        if(yr-D[i].doj[2]>3)
        {
        printf("%s\n",D[i].name) ;
        }

        }

    return 0 ;

}