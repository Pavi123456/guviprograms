#include<stdio.h>
#include<string.h>
 
void main()
{
   char a[3000];
   int i;
   printf("Enter the string");
   scanf("%s",a);
   i=strlen(a);
   a[i]='.';
   printf("%s",a);
