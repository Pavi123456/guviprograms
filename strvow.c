include<stdio.h>
#include<string.h>
int main()
{
   char *a[50];
   int i,n;
   printf("Enter the string");
   scanf("%[^\n]s",&a[i]);
   for(i=0;a[i]!='\0';i++)
   {
   if((a[i]=='a')&&(a[i]=='e')&&(a[i]=='i')&&(a[i]=='o')&&(a[i]=='u'))
   {
    n=1;
   }
   if(n==1)
   {
   printf("\nYes");	
   }
   else
   {
   printf("No");
   }
   return(0);
}
