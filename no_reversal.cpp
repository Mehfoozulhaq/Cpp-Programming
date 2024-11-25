#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit; 
        num /= 10; 
    }
    return reversed;
}

int main() {
    int num;
    
    while (true) {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> num;
        
        if (num == 0) {
            break; 
        }
        
        if (num < 0) {
            cout << "Please enter a positive integer." << endl;
        } else {
            int reversed = reverseNumber(num);
            cout << "Reversed number: " << reversed << endl;
        }
    }

    
    return 0;
}
