// https://codeforces.com/contest/2132/problem/A
// Solved

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<string> output;
    cin >> t;
    while(t--){
        int n, m;
        // length of string a and b
        cin >> n;
        string a, b, c;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;
        for(int i = 0; i < m; i++){
            if(c[i]=='V') a.insert(0, 1, b[i]); // Append to front
            else a.push_back(b[i]);
        }
        output.push_back(a);
    }
    for(string item : output) cout << item << "\n";
}