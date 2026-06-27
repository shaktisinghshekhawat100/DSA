#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    int original = n; // Store the original number for palindrome check
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (rev == original) {
        cout << original << " is a palindrome number." << endl;
    } else {
        cout << original << " is not a palindrome number." << endl;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int reversed = reverseNumber(n);
    cout << "Reversed number: " << reversed << endl;
    return 0;
}