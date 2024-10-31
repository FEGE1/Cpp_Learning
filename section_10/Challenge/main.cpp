#include <iostream>
#include <string>

using namespace std;

int main(){

    string cipher;
    string encrypeted;

    while (true)
    {
        cout << "(q=Quit)Enter a Secret Message: ";
        getline(cin,cipher);

        if(cipher!="q"){
            encrypeted.clear();
            for(char letter:cipher){
                if (letter=='x'||letter=='X'){
                    encrypeted = encrypeted + "a";
                }
                else if (letter=='z'||letter=='Z'){
                    encrypeted = encrypeted + "b";
                }
                else if (letter==' '||letter==' '){
                    encrypeted = encrypeted + " ";
                }
                else{
                    encrypeted = encrypeted + letter;
                }
            }
            cout << "Encrypeted Message: " << encrypeted << endl;
        }  
        else{
            break;
        } 
    }
    
    return 0;
}