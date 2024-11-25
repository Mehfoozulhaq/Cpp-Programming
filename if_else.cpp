#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number\n";
    cin>>x;
    if (x<0)
    {
        cout<<"the number is Negative";

    }
    else if (x>0)
    {
        cout<<"the number is positive";
    }
    else
    {
        cout<<"the number is zero";
    }
    
    return 0;
}
