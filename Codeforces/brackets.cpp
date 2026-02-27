#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string brackets;
        bool left = false;
        bool right = false;
        bool impossible = false;
        cin >> brackets;
        for(int i = 0; i < brackets.length(); i++){
            if(i!=0){
                if(brackets[i-1] == ')' && brackets[i] == '(') impossible = true;
            }
        }
        if(impossible) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}