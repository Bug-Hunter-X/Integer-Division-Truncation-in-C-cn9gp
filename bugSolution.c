#include <stdio.h>

int main() {
  float x = 10.0; // Declare x as a float
  float y = 5.0;  // Declare y as a float
  float z = x / y; // floating-point division
  printf("%f\n", z); // print as a float
  return 0;
}

//Alternative Solution
#include <stdio.h>

int main() {
  int x = 10;
  int y = 5;
  float z = (float)x / y; //Cast x to float before the division
  printf("%f\n", z);
  return 0;
}