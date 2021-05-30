#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int nth(int n, int a, int b, int c) 
{
    int d=a+b+c ;
    if(n==1)
    {
        return a ;
    }
    else
    if(n==2)
    {
        return b ;
    }
    else
    if(n==3)
    {
        return c ;
    }
    else 
    if(n==4)
    {
        return d ;
    }
    else
    return(nth(--n,b,c,d)) ;
     
}

int main() 
{
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = nth(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
