#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i;
    printf("Enter the string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(isdigit(a[i]))
        {
            printf("%d",a[i]);
        }
    }
}
