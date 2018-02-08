#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int n,i,j,c=0;
    printf("Enter the string");
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("\nyes");
    }
    else
    {
        printf("\nNo");
    }
}
