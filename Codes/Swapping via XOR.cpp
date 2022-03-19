#include <iostream>
using namespace std;

int main(){
    int a=4,b=6;

    a = a ^ b;
    b = b ^ a;
    a = b ^ a;

    cout<<a<<" "<<b;
}