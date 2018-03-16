#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[200],i,j,c,d,e,f,g,h;
    int l,k,flag;
    printf("Enter the first string : ");
    scanf("%s",&a);
    printf("\nEnter the second string : ");
    scanf("%d",&b);
    l=strlen(a);
    k=strlen(b);
    if(l==k)
    {
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                c=a[i];
                d=a[j];
                e=b[i];
                f=b[j];
                g=c-d;
                h=e-f;
                if(g==h)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                }
            }
        }
        
    }
    if(flag==1)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
}
