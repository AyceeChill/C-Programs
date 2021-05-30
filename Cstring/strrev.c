#include<stdio.h>
#include<string.h>
int main()
{
    int i,temp,j ;
    char a[100] ;

    printf("Enter characters\n") ;
    scanf("%s",a) ;

    i=0 ;
    temp=0 ;
    j=strlen(a) ;

    
  while(i<j)
    {
       temp=a[i] ;
       a[i]=a[j] ;
       a[j]=temp ;
       i++ ;
       j-- ;
    }   
    
    printf("reversed string is\n") ;
    printf("%s",a) ;
    return 0 ;

}