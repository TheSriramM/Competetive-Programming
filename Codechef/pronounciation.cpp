#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector <string> output;
    cin >> t;
    for(int i = 0; i < t; i++){
        int len;
        int cnt = 0;
        bool hard = false;
        string word;
        cin >> len;
        cin >> word;
        for(char letter : word){
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
                cnt = 0;
            }
            else{
                cnt++;
                if(cnt >= 4){
                    hard = true;
                }               
            }
        }
        if (hard){
            output.push_back("no");
        }
        else{
            output.push_back("yes");
        }
    }
    for(string item : output){
        cout << item << "\n";
    }
}