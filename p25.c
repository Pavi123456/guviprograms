#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],t[100];
	int n,i,j;
	printf("Enter the nof.of strings");
	scanf("%d",&n);
	printf("\nEnter the strings");
	for(i=0;i<=n;i++)
	{
	scanf("%s",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
		if(strlen(a[i])<strlen(a[j]))
		{
		    strcpy(t[i],a[i]);
		    strcpy(a[i],a[j]);
		    strcpy(a[j],t[i]);
		}
	}
	for(i=0;i<n;i++)
	{
	    printf("%s",a[i]);
	}
	return 0;
}
