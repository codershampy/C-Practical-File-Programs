#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i=i+2)
{
    printf("The alternate numbers are:%d\n", a[i]);
}
return 0;
}