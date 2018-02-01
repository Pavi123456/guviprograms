#include<stdio.h>
#include<string.h>
int main()
{
   int l1,l2;
   printf("Enter the value of l1");
   scanf("%d",&l1);
   printf("Enter the value of l2");
   scanf("%d",&l2);
   if(((l1*l2)%l1)==0)
   {
   	printf("\nYes");
   }
   else
   {
   printf("No");
   }
   return(0);
}
