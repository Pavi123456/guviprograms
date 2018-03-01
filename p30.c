#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,n,c=0;
	printf("Enter the strings");
	scanf("%s %s",&a,&b);
	printf("\nEnter the num");
	scanf("%d",&n);
	for(i=0;(a[i]!='\0'&&b[i]!='\0');i++)
	{
		if(a[i]!=b[i])
		{
			c++;
		}
	}
	if(n==c)
	{
	    printf("\nYes");
	}
	else
	{
	    printf("\nNo");
	}
}
