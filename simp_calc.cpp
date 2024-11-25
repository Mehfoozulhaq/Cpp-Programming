#include <iostream>
using namespace std;
int main(){
    float num1,num2;
    char o;
    cout<<"enter 1st number\n";
    cin>>num1;
    cout<<"enter 2nd number\n";
    cin>>num2;
    cout<<"enter the operator (+ - * or /)\n";
    cin>>o;
    switch (o)
    {
    case '+' : cout<<"answer: "<<num1+num2;
        break;
    case '-' : cout<<"answer: "<<num1-num2;
        break;
    case '*' : cout<<"answer: "<<num1*num2;
        break;
    case '/' : cout<<"answer: "<<num1/num2;
        break;
    default: cout<<"INVALID INPUT";
        break;
    }
    return 0;
}
