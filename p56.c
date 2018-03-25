#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b;
	int i;
	printf("Enter your first string : ");
	scanf("%s",&a);
	printf("\nEnter your string to be searched : ");
	scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]==b)
    	{
    	     printf("\n%d",i+1);
    	     break;
		}
	}
}
	
