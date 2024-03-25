#include<stdio.h>
int main()
{
int i , sum=0, pro=1, a[10];
for(i=0;i<10;i++){
printf("enter the number");
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]%2==0)
sum=sum+a[i];
else
pro=pro*a[i];
}
printf("sum of even number is:%d\n product of odd numbers us:%d",sum,pro);
return 0;
}
