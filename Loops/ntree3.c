 #include<stdio.h>
 int main()
 {

    int r,a,s,p,n=1 ;

    printf("enter the number of rows") ;
    scanf("%d",&r) ;

    for(a=1;a<=r;a++)
    {
        for(s=r-1;s>=a;s--)
        {
            printf(" ") ;
        }

        for(p=1;p<=a;p++)
        {
            printf("%d ",n++) ;
            
        }
        printf("\n") ;
    }
    return 0 ;
 }