#include <iostream>

int *reverseArray(int *numbers, int length) {
    int *reversedArray = new int[length];
    
    for (int i = 0; i < length; i++) {
        reversedArray[i] = numbers[length - 1 - i];
    }
    
    return reversedArray;
}
