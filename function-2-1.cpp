#include <iostream>

void hexDigits(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        int num = numbers[i];
        char hexDigit;
        
        // Determine the corresponding hex digit by using a switch statement
        switch (num) {
            case 0:
                hexDigit = '0';
                break;
            case 1:
                hexDigit = '1';
                break;
            case 2:
                hexDigit = '2';
                break;
            case 3:
                hexDigit = '3';
                break;
            case 4:
                hexDigit = '4';
                break;
            case 5:
                hexDigit = '5';
                break;
            case 6:
                hexDigit = '6';
                break;
            case 7:
                hexDigit = '7';
                break;
            case 8:
                hexDigit = '8';
                break;
            case 9:
                hexDigit = '9';
                break;
            case 10:
                hexDigit = 'A';
                break;
            case 11:
                hexDigit = 'B';
                break;
            case 12:
                hexDigit = 'C';
                break;
            case 13:
                hexDigit = 'D';
                break;
            case 14:
                hexDigit = 'E';
                break;
            case 15:
                hexDigit = 'F';
                break;
            default:
                hexDigit = 'X'; // Placeholder for unexpected values
                break;
        }
        
        // Print the index, number, and corresponding hex digit
        std::cout << i << " " << num << " " << hexDigit << std::endl;
    }
}
