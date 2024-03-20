#include <iostream>

// Function declarations
int *readNumbers();
void hexDigits(int *numbers, int length);

int main() {
    // Call readNumbers function to read the numbers
    int *numbers = readNumbers();
    
    // Call hexDigits function to print the corresponding hex digits
    hexDigits(numbers, 10);
    
    // Delete the dynamically allocated array
    delete[] numbers;
    
    return 0;
}
