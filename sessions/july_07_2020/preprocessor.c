// pre-processor directive to include standard in and out (I/O) functions
#include <stdio.h>

// define global variable - acceleration due to gravity (9.8 m/s/s) (hint: #define)
#define GRAVITY 9.80

int main() {

  // Print out value of acceleration due to gravity.
  // Output should say: "The acceleration of gravity is: 9.8 m/s/s"
  // dont worry too much about %f formatting - I will get into that later.
  printf("The acceleration of gravity is %0.2f m/s/s\n", GRAVITY);

  return 0;

}