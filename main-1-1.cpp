#include <iostream>

//declare the function
int *readNumbers();
void printNumbers(int *numbers, int length);

int main() {
    //call the readNumbers function
    printNumbers(numbers, 10);
    delete[] numbers;

    return 0;
}