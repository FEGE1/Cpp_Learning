#include <iostream>

using namespace std;

int main(){

    const int s_room_price {25};
    const int l_room_price {35};
    int s_room_number {0};
    int l_room_number {0};
    double tax_rate {0.06};

    cout << "*** Fege cleaning service ***" << "\n" << "Enter the number of small rooms: ";
    cin >> s_room_number;
    cout << "Enter the number of large rooms: ";
    cin >> l_room_number;
    
    cout << "Number of small rooms: " << s_room_number << endl;
    cout << "Number of large rooms: " << l_room_number << endl;
    cout << "Price per small rooms: " << s_room_price << "\n" << "Price per large rooms: " << l_room_price << endl;
    cout << "Coust: " << (s_room_number*s_room_price)+(l_room_number*l_room_price) << endl;  
    cout << "Tax: " << ((s_room_number*s_room_price)+(l_room_number*l_room_price))*tax_rate << "\n" << "===================" << endl;
    cout << "Total: " << ((s_room_number*s_room_price)+(l_room_number*l_room_price))+(((s_room_number*s_room_price)+(l_room_number*l_room_price))*tax_rate);

    return 0;
}