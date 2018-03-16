#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,c=0,l;
    printf("\nEnter the first string : ");
    scanf("%s",&a);
    printf("\nEnter the second string : ");
    scanf("%s",&b);
    l=strlen(a);
    for(i=0;(a[i]!='\0'&&b[i]!='\0');i++)
    {
        
        if(a[i]==b[i])
        {
              c++;
        }
        
    }
    if(c==l)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
}
