#include <stdio.h>
#include <string.h>
void main()
{
	char a[100];
	int i,l;
	printf("Enter the string");
	scanf("%[^\n]",&a);
	l=strlen(a);
    for(i=0;i<l;i++)
    {
    	if(i==0)
    	{
    		a[i]=a[i]-32;
		}
	    else if(a[i]=='\0')
		{
			a[i+1]=a[i+1]-32;
		}
	}
	for(i=0;i<l;i++)
	{
		printf("%c",a[i]);
	}
	
}
