#include<stdio.h>
#include<string.h>
void main()
{
char a='(',b=')',c[10],d=1;
int i;
printf("Enter the strings");
scanf("%s",c);
for(i=0;c[i]!='\0';i++)
{
    if(c[i]==a)
    {
        d++;
    }
    else if(c[i]==b)
    {
        d--;
    }
}
if(d<0)
{
    printf("\nNo");
}
else if(d==1)
{
    printf("\nYes");
}
else
{
    printf("\nNo");
}
}
