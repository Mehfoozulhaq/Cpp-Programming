#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers less than or equal to " << n << " are: " << endl;

    int i = 2; 
    while (i <= n) {
        if (isPrime(i)) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}