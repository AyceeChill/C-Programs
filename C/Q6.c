#include<stdio.h>

struct box
{
    int l,b,h ;
} bx[100] ;

int vol(struct box bxx)
{
    return bxx.l*bxx.b*bxx.h ;  
}
int size(struct box bxx,int x)
{
    return bxx.h<x ;
}


int main()
{
    int n,i ;
   
    scanf("%d",&n) ;

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&bx[i].l,&bx[i].b,&bx[i].h) ;
    }

    for(i=0;i<n;i++)
    {
       if(size(bx[i],41))
       printf("%d\n",vol(bx[i])) ;
    }

return 0 ;

}