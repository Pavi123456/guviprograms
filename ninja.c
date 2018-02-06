#include<stdio.h>
void main()
{
    int a[10],b[10],i,n;
    printf("Enter the no.of ninja rows");
    scanf("%d",&n);
    printf("\nEnter the count of ninja warriors");
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    printf("\nThe difference of warriors is ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",(b[i]-a[i]));
    }
}
