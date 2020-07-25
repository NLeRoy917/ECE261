#include <stdio.h>

int main(void) {

    // declare some identifiers
    int x,y;
    float f,g; 
    
    /* 
    Try out some string formatting... printing a default number of spaces, decimal places and justification

                    %[formating]d
    */

    printf("***%5d***\n",23); // at minimum print 5 characters, defualts to right justify
    printf("***%-5d***\n",23); // print 5 characters wide, left justified
    printf("***%05d***\n",23); // print 5 spaces wide, fill with 0's
    printf("***%+5d***\n",23); // print 5 spaces wide, make positive
    printf("***%+-5d***\n",23); // print 5 spaces, positive and left justified
    printf("***%+5d***\n", -35); // prints -35 right justified
    printf("***%-+5d***\n", -35); // prints 35 left jsutified - 5 spaces
    printf("***%5.2f***\n", 23.234567); // 5 spaces total, to TWO decimal places (23.23)
    printf("***%06.2f***\n", 23.234567); // 6 spaces total, right justify, two deicmal places, fill empty space with 0's
    printf("***%-6.2f***\n", 23.234567); // two decimal places, 6 spaces total, left justified, fill empty space with white space
    printf("***%-10.3f***\n",12.867921); // 3 decimal places, left justified, 10 spaces total


    return 0;
}