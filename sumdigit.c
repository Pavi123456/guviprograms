#include<stdio.h>
void main()
{
    int a[30],i,j,n,area=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("\nEnter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        area=area+a[i];
    }
    printf("%d",area);
}
