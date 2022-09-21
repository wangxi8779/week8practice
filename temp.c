#include <stdio.h>

int main(void) {
  int c, f;
  printf("enter a temperature in celsius: ");
  scanf("%d", &c);
  f = c * 9 / 5 + 32;
  printf("%d degrees Celsius is %d degrees Fahrenheit\n", c, f);
  return 0;
}