#include <iostream>

using namespace std;

int main(){

    int number_of_cents {0};

    cout << "Enter Number of Cents: ";
    cin >> number_of_cents;

    if(number_of_cents>=0){
        int dollar = number_of_cents / 100;
        int quarter = number_of_cents / 25;
        int dimes = number_of_cents / 10;
        int nickels = number_of_cents / 5;
        int pennies = number_of_cents / 1;

        cout << "Cents: " << number_of_cents << endl;
        cout << "Dollars: " << dollar << endl;
        cout << "Cents: " << quarter << endl;
        cout << "Cents: " << dimes << endl;
        cout << "Cents: " << nickels << endl;
    }
    else{
        cout << "Wrong Input !";
    }

    return 0;
}