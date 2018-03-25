#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,c=0,k=0;
	printf("Enter your first string : ");
	scanf("%s",&a);
	printf("\nEnter your first string : ");
	scanf("%s",&b);
	strlwr(a);
	strlwr(b);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
    for(i=0;(a[i]!='\0'&&b[i]!='\0');i++)
    {
    	if(a[i]==b[i])
    	{
    		k++;
		}
	}
	if(c==k)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
