#include <iostream>

// Function declarations
int *readNumbers();
bool equalsArray(int *numbers1, int *numbers2, int length);
int *reverseArray(int *numbers, int length);

int main() {
    // Call readNumbers function to read the numbers
    int *numbers = readNumbers();
    
    // Call reverseArray function to get the reversed array
    int *reversedNumbers = reverseArray(numbers, 10);
    
    // Check if the original and reversed arrays are equal and display the result
    bool result = equalsArray(numbers, reversedNumbers, 10);
    std::cout << std::boolalpha << result << std::endl;
    
    // Delete the dynamically allocated arrays
    delete[] numbers;
    delete[] reversedNumbers;
    
    return 0;
}
