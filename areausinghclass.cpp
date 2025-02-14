#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;
public:
    void getarea(){
        cout<<"Enter the length and breadth of rectangle"<<endl;
        cin>>length>>breadth;
    }
    void usearea(){
        cout<<"area of rectangle is :"<<length*breadth<<endl;
    }
};
int main(){
    rectangle r;
    r.getarea();
    r.usearea();
    return 0;
}
