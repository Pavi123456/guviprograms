#include<stdio.h>
#include<string.h>
int main()
{
   int l,n,r;
   printf("Enter the value of l");
   scanf("%d",&l);
   printf("\nEnter the value of r");
   scanf("%d",&r);
   printf("\nEnter the value of n");
   scanf("%d",&n);
   if(n>l&&n<r)
   {
   	printf("\nYes");
   }
   else
   {
   printf("No");
   }
   return(0);
}
