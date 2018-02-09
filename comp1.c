#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf ("Enter a number");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if (c==2)
    printf ("PRIME");
    else
    printf ("COMPOSITE");
    return 0;
}
