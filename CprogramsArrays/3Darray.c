#include<stdio.h>
int main()
{

    int threed[3][2][3]={{{22,33,44},{55,66,77}},{{23,34,21},{54,32,12}},{{56,34,54},{45,32,65}}} ;
    int i,j,k ;

    printf("printing 3D array\n") ;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d",threed[i][j][k]) ;
            }

            printf("\n") ;
        }

        printf("\n") ;
    }

    return 0 ;
  
}