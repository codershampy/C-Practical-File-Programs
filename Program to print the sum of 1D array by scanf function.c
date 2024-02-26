#include<stdio.h>

int main()
{
int a[10],i,sum=0;
for(i=0;i<10;i++)
{
    printf("Enter a number\n");
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
    sum=sum+a[i];
}
printf("Sum of 1D array number=%d",sum);
return 0;
}
