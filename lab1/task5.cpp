#include <iostream>
using namespace std;

int main(){
    double Celsius;
    cin >> Celsius;
    double Fahrenheit = (Celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << Fahrenheit;
    return 0;
}