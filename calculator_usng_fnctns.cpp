#include <iostream>
using namespace std;

void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);
void mod(int a, int b);

int main()
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /, %): ";
    cin >> op;

    switch (op)
    {
    case '+':
        add(num1, num2);
        break;
    case '-':
        subtract(num1, num2);
        break;
    case '*':
        multiply(num1, num2);
        break;
    case '/':
        if (num2 != 0)
        {
            divide(num1, num2);
        }
        else
        {
            cout << "Error! Division by zero.\n";
        }
        break;
    case '%':
        if (static_cast<int>(num2) != 0)
        {
            mod(static_cast<int>(num1), static_cast<int>(num2));
        }
        else
        {
            cout << "Error! Division by zero.\n";
        }
        break;
    default:
        cout << "Invalid operator!\n";
    }

    return 0;
}

void add(double a, double b)
{
    cout << "Result: " << a + b;
}

void subtract(double a, double b)
{
    cout << "Result: " << a - b;
}

void multiply(double a, double b)
{
    cout << "Result: " << a * b;
}

void divide(double a, double b)
{
    cout << "Result: " << a / b;
}

void mod(int a, int b)
{
    cout << "Result: " << a % b;
}
