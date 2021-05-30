#include<stdio.h>
#include<string.h>
int main()
{

    char a[5][10]={
                    "A",
                    "C",
                    "B",
                    "D",
                    "F"
                  } ;

    int i,j ;
    char temp[10] ;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
            strcpy(temp,a[i]) ;
            strcpy(a[i],a[j]) ;
            strcpy(a[j],temp) ;
            }
        }
          
    }
    for(i=0;i<5;i++)
    {
    printf("%s\n",a[i]) ;
    }

    return 0 ;

}