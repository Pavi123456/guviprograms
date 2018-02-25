#include<stdio.h>
#include<string.h>
void main()
{
char s[10]="world";
int b,n,i;
b=strlen(s);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",s[b-1]);
b--;
}
}
