#include<stdio.h>
void main()
{
    int l,r,i,flag,c=0;
    printf("Enter the intervals");
    scanf("%d%d",&l,&r);
    while(l<r)
    {
        for(i=0;i<=l/2;++i)
        {
            if(l%i==0)
            {
                flag=1;
                break;
                c++;
            }
            if(flag==0)
            {
                printf("%d",c);
            }
        }
    }
    
}
