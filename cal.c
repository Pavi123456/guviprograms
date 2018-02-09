#include<stdio.h>
#include<string.h>
char s[20],k;
int i,val1=0,val2=0,j;
void main()
{
scanf("%s",s);
for(i=0;s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/';i++)
{
	val1=val1*10+(s[i]-48);
}
k=s[i++];
for(j=i;s[j]!='\0';j++)
	val2=val2*10+(s[j]-48);
switch(k)
{case '+':
	printf("%d",val1+val2);
	break;
	case '-':
	printf("%d",val1-val2);
	break;
	case '*':
	printf("%d",val1*val2);
	break;
  case '/':
	printf("%d",val1/val2);
	break;
}
}
