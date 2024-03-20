#include <iostream>

bool equalsArray(int *numbers1, int *numbers2, int length) {
    if (length < 1) {
        return false; // Length of arrays is less than 1, return false
    }
    
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false; // Numbers at the same index are not equal, return false
        }
    }
    
    return true; // All numbers are equal, return true
}
