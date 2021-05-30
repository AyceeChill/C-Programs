#include<stdio.h>
int main()
{
    int s[4][2]={{2345,56},{5432,67},{6534,76},{7564,86}} ;
    int i,j ;

    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",*(*(s+i)+j)) ;
            printf("\n") ;
        
    }

    return 0 ;
                 
}