#include<stdio.h>
void main()
{
    char a[100];
    int c=0,i;
    printf("Enter the string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    printf("\nthe length of the string is %d",c);
}
