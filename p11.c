#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int flag=0,i;
    printf("Enter the day");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[0]=='s'||a[0]=='S')
    {
        flag=1;
    }
    }
    if(flag==1)
    {
       printf("\Yes"); 
    }
    else
    {
        printf("\nNo");
    }
    return 0;
}
