#include <stdio.h>

int main(void)
{
  // 0. declare variables
  int a;
  int b;
  int sum;

	// 1.	Prompt the user to enter the first integer number.
  printf("Enter the first integer number: ");
  
  // 2.	Store the user input in a variable
  scanf(" %d",&a);

  // 3.	Display the number the user enters.
  printf("You entered: %d\n\n", a);

  // 4.	Repeat the above three procedures for the second number.
  printf("Enter the secand integer number: ");
  scanf(" %d",&b);
  printf("you entered: %d\n\n",b);
  
  // 5.	Add the two numbers and store the result in a third variable.
  sum = a+b;

  // 6.	Display the result in the console window.
  printf("The two number added together equal to: %d\n",sum  );
  
  return 0;
}

