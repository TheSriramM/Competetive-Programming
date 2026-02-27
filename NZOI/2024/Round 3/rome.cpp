#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> towers;
    vector<int> possible_heights;
    int unsafe = 0;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        towers.push_back(num);
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            possible_heights.push_back(towers[0]);
            unsafe += 1;
        }
        else {
            auto it = find(possible_heights.begin(), possible_heights.end(), towers[i]);
            if(it != possible_heights.end()) {
                // the height was found
                unsafe -= 1;
                possible_heights.erase(it);
            }
            else{
                // the height was not found
                for(int item : possible_heights){
                    if(item < towers[i])possible_heights.erase(it);
                }
                unsafe += 1;
            }
        }
        cout << unsafe << "\n";
    }
}