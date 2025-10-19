#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;         // Get the last digit
        reversed = reversed * 10 + digit; // Append digit to reversed
        num /= 10;                    // Remove the last digit
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}