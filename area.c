#include<stdio.h>
void main()
{
    int a[30],i,j,area=1;
    printf("Enter the length,breadth,height");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        area=area*a[i];
    }
    printf("%d",area);
}
