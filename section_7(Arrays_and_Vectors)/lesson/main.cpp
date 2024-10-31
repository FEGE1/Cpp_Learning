#include <iostream>

using namespace std;

int main(){
    
    /*
    vector <char> vowels {'a','e','i','o','u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    */

    vector <int> test_scores {100,98,89};
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "Enter a test score to add to the vector: ";

    int score_to_add {0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;

    return 0;
}