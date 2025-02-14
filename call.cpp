#include<iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap_call_by_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a << " " << b << endl;
    swap_call_by_reference(a,b);
    cout << a << " " << b << endl;
}
