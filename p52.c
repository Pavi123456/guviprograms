#include<stdio.h>
void main()
{
    int a[100],n,i,j,t,k;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("\nEnter the k");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d",a[k-1]);
}
