#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    
    while(n%10!=0)
    {
        n++;
    }
    printf("\nthe nearest value is %d",n);
    
}
