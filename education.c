#include <stdio.h>
#include <string.h>

int main(void) {
  int years;
  printf("enter the number of years you spent in education: ");
  scanf("%d", &years);
  char educationLevel[10];
  if (years >= 0 && years <= 7) {
    strcpy(educationLevel, "Primary");
  } else if (years >= 8 && years <= 12) {
    strcpy(educationLevel, "Secondary");
  } else if (years >= 13) {
    strcpy(educationLevel, "Tertiary");
  }
  printf("The level of your eduction is: %s level education.\n", 
         educationLevel);
  return 0;
}

