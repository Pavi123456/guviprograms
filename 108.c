#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	a=a+(c-1)+b;
	printf("\nThe AP value is :%d",a);
}
