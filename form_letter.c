#include <stdio.h>

int main(void) {
  char firstName[10], lastName[10];
  int age = 0;
  float employmentFraction = 0.0;
  printf("Enter your name, age and employment fraction: ");
  scanf(
      "%s"
      " "
      "%s"
      " "
      "%d"
      "%f",
      firstName, lastName, &age, &employmentFraction);
  printf(
      "Your name is %s %s, you are %d years old and your employment fraction "
      "is "
      "%.1f.\n",
      firstName, lastName, age, employmentFraction);
  return 0;
}