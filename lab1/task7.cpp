#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    float interest = (a * b * c) / 100;
    cout << "Simple Interest is " << interest << ".";
    return 0;
}