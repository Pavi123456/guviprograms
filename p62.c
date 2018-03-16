#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number to be divided");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            if(((n/i)%2)!=0)
            {
                printf("%d",i);
            }
        }
    }
}
