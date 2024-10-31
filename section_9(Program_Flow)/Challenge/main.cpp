#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> user_list{6,5,4,2,3,4,5};

    while(true){
        char user_choice{' '};

        cout << "========================================" << endl;
        cout << "P - Print numbers" << "\nA - Add a number" << "\nM - Display mean of the numbers" 
        << "\nS - Display the smallest number" << "\nL - Display the largest number" << "\nQ - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> user_choice;
        cout << "========================================" << endl;
        
        user_choice = tolower(user_choice);

        if(user_choice=='q'){
            break;
        }
        else if(user_choice=='p'){
            for(int number:user_list){
                cout << number << endl;
            }
        }
        else if(user_choice=='a'){
            cout << "Enter your (int)number want to add: ";
            int user_number{};
            cin >> user_number;
            
            user_list.push_back(user_number);
           
        }
        else if(user_choice=='m'){
            int sum1{0};
            double mean{0};
            for(int number : user_list){
                sum1 = sum1 + number;
            }
            mean = static_cast<double>(sum1) / user_list.size();

            cout << "Mean: " << mean << endl; 
        }
        else if(user_choice=='s'){
            int smallest_number{user_list.at(0)};
            for(int i{0};i<user_list.size();i++){
                for(int j=i+1;j<user_list.size();j++){
                    int current = (user_list.at(i)<user_list.at(j)) ? user_list.at(i):user_list.at(j);
                    smallest_number = (current < smallest_number) ? current : smallest_number;
                }
            }

            cout << "Smallest number: " << smallest_number << endl;
        }
        else if(user_choice=='l'){
            int largest_number{user_list.at(0)};
            for(int i{0};i<user_list.size();i++){
                for(int j=i+1;j<user_list.size();j++){
                    int current = (user_list.at(i)>user_list.at(j)) ? user_list.at(i):user_list.at(j);
                    largest_number = (current > largest_number) ? current : largest_number;
                }
            }

            cout << "Smallest number: " << largest_number << endl;
        }
    }

    return 0;
}