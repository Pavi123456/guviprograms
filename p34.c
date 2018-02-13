#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[20];
    printf("Enter the string");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i=i+3)
    {
    	printf("%c",a[i]);
    }
}
