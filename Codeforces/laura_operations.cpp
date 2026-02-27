// https://codeforces.com/problemset/problem/1900/B
// Solved

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<string> output;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a,b,c;
        string out = "";
        cin >> a >> b >> c;
        // no = 0
        if ((b+c) % 2 == 0){
            out += "1 ";
        }
        else{
            out += "0 ";
        }
        if ((a+c) % 2 == 0){
            out += "1 ";
        }
        else{
            out += "0 ";
        }
        if ((a+b) % 2 == 0){
            out += "1 ";
        }
        else{
            out += "0";
        }
        output.push_back(out);
    }
    for(int i = 0; i<t; i++){
        cout << output.at(i) << "\n";
    }
}