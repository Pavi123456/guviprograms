#include<stdio.h>
void main()
{
    int i,k,j,t,a[20];
    printf("Enter the size of array");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",a[i]);
    }
}
