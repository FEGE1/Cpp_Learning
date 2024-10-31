#include <iostream>
#include <string>

using namespace std;

int main(){

    string elements;
    int index{0};

    while (true){

        cout << "(q=Quit)Enter your pyramid elements: ";
        cin >> elements;
        cout << endl;

        int elements_length = elements.length();
        int k=elements_length;
        int column_length=elements_length;

        if(elements=="q"){
            break;
        }
        else{
            cout << "===========================" << endl;

            // Pyramid Section
            for (size_t i = 1; i <= elements_length; i++)
            {
                for (size_t j = 1; j <= column_length; j++)
                {
                    if (j>=k)
                    {   
                        if(j>elements_length){
                            index--;
                            cout << elements[index-1];
                        }
                        else{
                            cout << elements[index];
                            index++;
                        }
                    }
                    else{
                        cout << " ";
                    }
                }
                column_length+=1;
                k--;
                index = 0;
                cout << "\n";
            }
        }
        cout << "===========================" << endl;
    }
 
    return 0;
}