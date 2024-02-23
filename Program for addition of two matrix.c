#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\n Enter values for First matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter values for 2D array:");
        scanf("%d",&a[i][j]);
    }
    printf("\n Enter values for Second matrix:");
    for (i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter value for 2D array:");
        scanf("%d",&b[i][j]);
    }
    printf("\n First Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
    printf("\n Second Matrix:");
    for(j=0;j<3;j++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",b[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("Addition of Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",c[i][j]);
    }
    return 0;
}