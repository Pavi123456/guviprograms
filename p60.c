#include<stdio.h>
void main()
{
    int count=0,i,j;
    char a[10],b[10];
    printf("\n Enter two strings=");
    scanf("%s %s",a,b);
    for(i=0;(a[i]!='\0'&&b[i]!='\0');i++)
    {
        
        if(a[i]==b[i])
        {
            count++;
        }
    }
    if(count!=0)
    printf("\n YES");
    else
    printf("\n NO");
}
