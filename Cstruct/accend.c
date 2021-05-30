#include<stdio.h>
struct cdata
{
    int avgrn ;
    char name[10] ;
    int age ;
}D[20]={1234,"A",30,
        1233,"B",31,
        1232,"C",29,
        1231,"D",29,
        1230,"E",30,
        1229,"F",29,
        1228,"G",28
       } ;

int main()
{
    int i,j ;
    struct cdata temp ;
    
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(D[i].avgrn>D[i+1].avgrn)
            {
                temp=D[i] ;
                D[i]=D[i+1] ;
                D[i+1]=temp ;   
            }

        }

    }
    for(i=0;i<7;i++)
    {
    printf("%d %s %d\n",D[i].avgrn,D[i].name,D[i].age) ;
    }

    return 0 ;
    
}