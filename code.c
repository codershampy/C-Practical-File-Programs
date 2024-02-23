#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("\n Enter value for First matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter value for 2D array:");
        scanf("%d",&a[i][j]);
    }
    printf("\n Enter value for Second matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter value for 2D array:");
        scanf("%d",&b[i][j]);
    }
    printf("\n First matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
     printf("\n Second matrix is:");
    for(i=0;i<3;i++)
    {
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d\t",b[i][j]);
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++) 
    {
     c[i][j]=0;
    for(k=0;k<3;k++)
        
    {
     c[i][j]+=a[i][k]*b[k][j];
    }
    }
    }
    printf("\n Multiplication of Matrix:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",c[i][j]);
    }
    return 0;
}