#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vec{1,2,3};
    vector<vector<int>> temp{};
    int result{0};
    
    for(int i{0};i<vec.size();i++){
        for(int j{0};j<vec.size();j++){
            temp.push_back({vec.at(i),vec.at(j)});
        }
    }

    cout << temp[0][0];

    return 0;
}