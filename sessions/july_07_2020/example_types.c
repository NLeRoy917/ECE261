#include <stdio.h>
#include <stdbool.h>

int main() {
  //
  // define some variables
  //

  // some ints
  int number_ten = 10;
  int decimal_ten = 10.99999999;
  
  // some floats
  float small_num = 4.6;
  float large_num = 1450893.8743108;

  // a character
  char letter_A = 'A';

  // a boolean value
  bool is_late = true;

  // a long int
  long largeish_num = 141414;

  // a double
  double avagadros = 6.26e23;

  //
  // print out the values
  //

  printf("number_ten: %d\n", number_ten);
  printf("decimal_ten: %d\n", decimal_ten);
  printf("small_num: %f\n", small_num);
  printf("large_num: %f\n", large_num);
  printf("letter_A: %c\n", letter_A);
  printf("is it late? %d\n", is_late);
  printf("largeish_num: %ld\n", largeish_num);
  printf("avagadros: %f\n", avagadros);

  return 0;

}