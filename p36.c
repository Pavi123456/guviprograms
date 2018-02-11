#include<stdio.h>
void main()
{
    int n,t,k,flag;
    scanf("%d",&n);
    scanf("%d",&k);
    while(n!=0)
    {
        t=n%10;
        n=n/10;
        if(t==k)
        {
            printf("\nyes");
            flag=1;
        }
    
       else if(flag==0)
        {
            printf("\nNo");
        }
    }
}
