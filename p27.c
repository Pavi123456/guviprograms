#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int i;
	printf("Enter the string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
		else
		{
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
	
}
