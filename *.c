#include<stdio.h>
int main()
{
    int i,n,count=0;
    char s[20];
    printf("Enter the string");
    scanf("%s",&s);
    for(i=0;s[i]!=0;i++)
    {
        count++;
    }
    n=count/2;
    if(count%2!=0)
    {
        s[n]='*';
    for(i=0;s[i]!=0;i++)
    {
      printf("%s",s[i]);
    }
    }
    else
    {
        s[n-1]='*';
        s[n]='*';
        for(i=0;s[i]!=0;i++)
        {
            printf("%s",s[i]);
        }
    }
    return 0;
    
}
