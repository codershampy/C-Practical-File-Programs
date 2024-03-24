#include<stdio.h>
int main(){
    int n,n1=0,n2=1,n3;
    printf("n=");
    scanf("%d",&n);
    printf("Fibonacci Series");
    printf("%d%d",0,1);
    for(; n>2;n--)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
    }
    return 0;
}