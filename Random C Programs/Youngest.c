# include <stdio.h>
int main ()

{
    int s,r,a ;

    printf("enter the age of Shyam Ram and Ajay") ;
    scanf("%d %d %d",&s,&r,&a) ;

    if (s<a && s<r)
    {
        printf("Shyam is youngest") ;
    }
    else 
    {
        if (r<a && r<s)
    {
        printf("Ram is youngest") ;
    }
    else
    {
        if (a<r && a<s)
    {
        printf("Ajay is youngest") ;
    }

    }
    
    }
    return 0 ;

}