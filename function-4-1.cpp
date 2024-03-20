#include <iostream>
#include <climits>

int secondSmallestSum(int *numbers, int length) {
    int smallestSum = INT_MAX; // Initialize smallest sum to maximum possible value
    int secondSmallestSum = INT_MAX; // Initialize second smallest sum to maximum possible value
    
    // Iterate through all sub-arrays
    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; ++j) {
            sum += numbers[j];
            // Update smallestSum and secondSmallestSum if a smaller sum is found
            if (sum < smallestSum) {
                secondSmallestSum = smallestSum;
                smallestSum = sum;
            } else if (sum < secondSmallestSum && sum != smallestSum) {
                secondSmallestSum = sum;
            }
        }
    }
    
    return secondSmallestSum;
}
