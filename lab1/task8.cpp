#include <iostream>
using namespace std;

int main(){
    double weight, height;
    cin >> weight >> height;
    double BMI = weight / (height * height);
    cout << "Your BMI is " << BMI;
    return 0;
}