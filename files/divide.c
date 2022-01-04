#include <stdio.h>

int main()
{
  int start, end, divisor, count = 0;

  printf("Enter start: ");
  scanf("%d", &start);

  printf("Enter end: ");
  scanf("%d", &end);

  printf("divisor: ");
  scanf("%d", &divisor);

  for (int i = start; i <= end; i++){
    if (i % divisor == 0) {
      count++;
    }
    // if ((i % 3 != 0) && (i % 4 != 0)) {
    //   count++;
    // }
  }

  printf("count: %d", count);

  return 0;
}