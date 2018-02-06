#include<stdio.h>
void main()
{
char st[20],st1[20],st2[20],j=0,k=0;
int i=0;
printf("Enter a string");
scanf("%s",st);
while(st[i]!='\0')
{
if(i%2==0)
{
st1[j]=st[i];
j++;
}
else
{
st2[k]=st[i];
k++;
}
i++;
}
printf("\nOdd position string:%s",st1);
printf("\nEven Positon string:%s",st2);
}
