#include <iostream>

using namespace std;

int main(){

    int num1{},num2{},num3{};

    cout << "Enter three integer (use space key): ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    double average = static_cast<double>(num1+num2+num3)/3;  // integer'ı double a çevirir

    cout << "num1: " << num1 << "\nnum2: " << num2 << "\nnum3: " << num3 << endl;
    cout << "Sum: " << num1+num2+num3 << endl;
    cout << "Average: " << average;

    return 0;
}