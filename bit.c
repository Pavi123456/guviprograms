#include<conio.h>
void main()
{
    int a,b,t;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    printf("\nBefore swap a and b is:%d %d",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("\nAfter swap a and b is:%d %d",a,b);
}
