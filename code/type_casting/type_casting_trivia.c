#include <stdio.h>

int main() {
  int i_am_an_integer     = 1;
  int i_am_an_integer_too = 2;
  float i_am_a_decimal    = 2.2;

  printf("1 + 2.2 = %f\n", i_am_an_integer + i_am_a_decimal);
  printf("1 - 2.2 = %f\n", i_am_an_integer - i_am_a_decimal);
  printf("1 * 2.2 = %f\n", i_am_an_integer * i_am_a_decimal);
  printf("1 / 2.2 = %f\n", i_am_an_integer / i_am_a_decimal);
  printf("1 / 2 = %f\n", i_am_an_integer / i_am_an_integer_too);
  
  return 0;
}