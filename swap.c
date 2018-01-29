#include<conio.h>
void main()
{
    int a,b,t;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    printf("\nBefore swap a and b is:%d %d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nAfter swap a and b is:%d %d",a,b);
}
