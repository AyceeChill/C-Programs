#include<stdio.h>
struct bnkdata
{
    int accno ;
    char name[10] ;
    int balnce ;
}D[200]={1234,"A",100,
         1233,"B",1000,
         1232,"C",2000,
         1231,"D",2000,
         1230,"E",90,
         1229,"F",90,
         1228,"G",90
        } ;

void bavg(int x)
{
    int i ;
    
    for(i=0;i<200;i++)
    {
    if(D[i].balnce<x && D[i].balnce>0)
    {
        printf("Acc.No.---%d\n",D[i].accno) ;
        printf("Name------%s\n",D[i].name) ;
        printf("balance---%d\n",D[i].balnce) ;
    }
    }

}
void acc(int y)
{
    int i ;
    
    for(i=0;i<200;i++)
    {
    if(D[i].accno==y)
    {
        printf("Acc.No.---%d\n",D[i].accno) ;
        printf("Name------%s\n",D[i].name) ;
        printf("balance---%d\n",D[i].balnce) ;
    }
    }

}
void addacc(int x,int y)
{
    int i,b ;
    for(i=0;i<200;i++)
    {
    if(D[i].accno==y)
    {
        b=D[i].balnce+x ;
        printf("your account has been creditted with %d amount your new balance is %d.",x,b) ;
    }
    }

}
void wd(int x,int y)
{
    int i,b ;

    for(i=0;i<200;i++)
    if(D[i].accno==y)
    break ;

        if(D[i].balnce-x<100)
        {

            printf("insufficient funds!") ;
            return ;

        }
        else 
        {
            b=D[i].balnce-x ;
            printf("your account has been debitted your remaining balance is %d.",b) ;
        }

}


int main()
{
    int check ;
    printf("Enter '100' to check the number of people below avg balance.\n") ;
    scanf("%d",&check) ;
   
    printf("The list of People below avg balance.\n") ;
    bavg(check) ;

    printf("\n\n------------------------------------\n\n") ;

    char name ;
    int accn ;
    printf("\nEnter Acc.No. to access the account.\n") ;
    scanf("%d",&accn) ;
    
    printf("Account Details\n") ;
    acc(accn) ;

    printf("\n\n------------------------------------\n\n") ;

    int amt,trig,ac ;

    printf("\nEnter Amount and Acc.No. to make deposit or withdrawal.\n") ;
    scanf("%d %d",&amt,&ac) ;
    printf("Enter 1 for deposit 2 for withdrawal\n") ;
    scanf("%d",&trig) ;
    if(trig==1)
    {
        addacc(amt,ac) ;
    }
    else if(trig==2)
    {
        wd(amt,ac) ;
    }

    return 0 ;

}