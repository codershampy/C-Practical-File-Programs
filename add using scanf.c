#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the number\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("The sum is %d+%d=%d",a,b,c);
    return 0;
}