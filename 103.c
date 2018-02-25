#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int i;
	printf("Enter the stering:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
	if(name[i]>='a'&&name[i]<='z')
	{
		if(i==0)
		{
	      printf("%c",name[i]-32);
        }
        else if(name[i]=='\0')
        {
        	printf("%c",name[i+1]-32);
		}
	else
	printf("%c",name[i]);
	}
}
}
