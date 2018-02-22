#include<stdio.h>
#include<string.h>
void main()
{
char a[30],t;
int i=0;
printf("\nEnter a string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i=i+2)
{
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
    i=i+2;
}
printf("\nSwapped string:%s",a);
}
