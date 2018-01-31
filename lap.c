#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],n[20];
    int k=3,i;
    printf("Enter the string");
    scanf("%s",&s);
    for(i=0;i<k;i++)
    {
       n[i]=s[i];
    }
    printf("%s",n);
}
