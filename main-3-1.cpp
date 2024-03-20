#include <iostream>

// Function declarations
int *readNumbers();
bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
    // Call readNumbers function to read the first set of numbers
    int *numbers1 = readNumbers();
    
    // Call readNumbers function to read the second set of numbers
    int *numbers2 = readNumbers();
    
    // Check if the arrays are equal and display the result
    bool result = equalsArray(numbers1, numbers2, 10);
    std::cout << std::boolalpha << result << std::endl;
    
    // Delete the dynamically allocated arrays
    delete[] numbers1;
    delete[] numbers2;
    
    return 0;
}
