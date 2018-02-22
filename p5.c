#include<stdio.h>
#include<string.h>
void main()
{
    int i,l,k,a[20];
    char rom[100];
    printf("Enter the Roman number");
    scanf("%s",rom);
    l=strlen(rom);
    for(i=0;i<l;i++)
    {
        switch(rom[i])
        {
            case 'I':
            a[i]=1;
            break;
            case 'V':
            a[i]=5;
            break;
            case 'X':
            a[i]=10;
            break;
            }
        }
    k=a[l-1];
    for(i=l-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            k=k-a[i-1];
        }
        if(a[i]>=a[i-1])
        {
            k=k+a[i-1];
        }
    }
    printf("The integer value is: %d",k);
}
