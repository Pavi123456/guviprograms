#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char a[10];
	int i,l,flag=0;
	printf("Enter the string");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(isdigit(a[i]))
		{
			flag=flag+1;
		}
	}
	if(flag==l)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
