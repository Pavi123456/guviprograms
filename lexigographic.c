#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,j,t,b;
    printf("Enter the value");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {   
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}
