#include<stdio.h>
void main(){
    int arr[4];
    int i,j;
    printf("Enter array elements:");
    for(i=0;i<4;i++){
        scanf("%d",arr[i]);
    }
    printf("Printing array element");
    for(j=0;j<4;j++){
        printf("%d\n",arr[i]);
    }
}