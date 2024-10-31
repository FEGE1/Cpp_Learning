#include <iostream>

using namespace std;

int main(){

    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade){
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need a 80-89 or above, study hard!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need a 70-79 or above, study hard!" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
            break;
        default:
            cout << "Not a valid grade!" << endl;
    }

    return 0;
}