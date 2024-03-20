#include <iostream>

// Function declarations
int *readNumbers();
int secondSmallestSum(int *numbers, int length);

int main() {
    // Call readNumbers function to read the numbers
    int *numbers = readNumbers();
    
    // Calculate the second smallest sum of sub-arrays
    int result = secondSmallestSum(numbers, 10);
    
    // Display the second smallest sum found
    std::cout << result << std::endl;
    
    // Delete the dynamically allocated array
    delete[] numbers;
    
    return 0;
}
