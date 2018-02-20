#include<stdio.h>
void main()
{
    int i,a[10],n,j,flag=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
            {
                printf("%d",a[i]);
                flag=flag+1;
            }
        }
    }
    if(flag==0)
    {
            printf("Unique");
    }
}
        
