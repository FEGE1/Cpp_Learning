#include <iostream>

using namespace std;

int main(){

    const double room_price {30};
    int number_of_rooms {0};
    float tax_rate {0.06};

    cout << "Enter the number of rooms: ";
    cin >> number_of_rooms;
    cout << "Rooms: " << number_of_rooms << endl;
    cout << "Price per room: " << room_price << "\n" << endl;
    cout << "Cost: " << number_of_rooms*room_price << endl;
    cout << "Tax: " << number_of_rooms*room_price*tax_rate << endl;
    cout << "Total: " << (number_of_rooms*room_price)+(number_of_rooms*room_price*tax_rate);

    return 0;
}