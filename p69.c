#include<stdio.h>
void main()
{
    int a[100],n,k,i,j;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("\nEnter the no.of elements to be deleted");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<(n-k);j++)
    {
        printf("%d\t",a[j]);
    }
}
