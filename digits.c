#include <stdio.h>

int main(void) {
  int number, a, b, c;
  printf("enter a positive, three digit integer: ");
  scanf("%d", &number);
  a = number / 100;
  b = (number % 100) / 10;
  c = number % 100 % 10;
  printf(
      "%d\n"
      "%d\n"
      "%d\n",
      c, b, a);
  return 0;
}