#include <stdio.h>

// addition function 
// a : integer 
// b : integer
// Return : integer
int addition(int a, int b) {
  return a + b; 
}

float addition2(float a, float b) {
  return a + b;
}

// substraction 
int subtract(int a, int b) {
  return a - b;
}
float subtract2(float a, float b) {
  return a - b;
}
int divide(int a, int b) {
  return a / b;
}
float divide2 (float a, float b) {
  return a / b;
}

// x = 2y + 3z; => y = 1, z = 3 => x = 2*1 + 3 * 3 => 11

int func1(int y, int z) {
  return 2 * y + 3 * z; 
}

// x = 3y - 2z;
int func2(int y, int z) {
  return 3 * y - 2 * z;
}
int main(void) {
  // variables
  int a = 6, b = 6, y = 4; 
  int result = func1(a, b); // func1(1, 3)
  printf("result from func1 is %d\n", result);
  int r1 = func2 (y, b);
  printf ("result from func2 is %d\n", r1);


  float s = addition2(23,12.5);
  float result1 = subtract2(26, 0.5);

  int d = divide(10, 3);
  float d2 = divide2(10,3);
  printf("the result of divide is %d \n", d);
  printf("the result of divide is %f \n", d2);

  printf("the result of subtract is %0.2f\n", result1);
  printf("the sum : %f\n", s);
  return 0;

}

/*
x = y +z;
  float s = addition2(23,12.5);
  float result = subtract2(26, 0.5);

  int d = divide(10, 3);
float d2 = divide2(10,3);
  printf("the result of divide is %d \n", d);
  printf("the result of divide is %f \n", d2);

  printf("the result of subtract is %0.2f\n", result);
  printf("the sum : %f\n", s);
*/