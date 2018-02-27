#include<stdio.h>
void main()
{
    int a[20],j,i,t;
    printf("Enter the array elements");
    for(i-0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("The minimum value is :%d",a[0]);
}
