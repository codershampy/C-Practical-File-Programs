#include <stdio.h>
int main()
{
  int V1, V2, temp;

  printf("Enter two number\n");
  scanf("%d%d", &V1, &V2);

  printf("Before Swapping\nFirst number = %d\nSecond number = %d\n", V1, V2);

  temp = V1;
  V1= V2;
  V2= temp;

  printf("After Swapping\nFirst number = %d\nSecond number = %d\n", V1, V2);

  return 0;
}