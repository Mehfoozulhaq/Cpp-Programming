#include <iostream>
using namespace std;
int main(){
   long int x;
   cout<<"Enter the salary\n";
   cin>>x;
   if(x<=250000){
    cout<<"no tax";
   }
   else if(x<=500000){
    cout<<" you have to pay" <<0.05*x <<"tax";
   }
   else if(x<=1000000){
    cout<<" you have to pay" <<0.2*x <<"tax";
   }
   else{
    cout<<" you have to pay  " <<0.3*x <<"  tax";
   }
   return 0;
}
