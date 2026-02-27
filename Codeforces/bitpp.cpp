#include <bits/stdc++.h>
using namespace std;

// First Codeforces problem solved in C++
// https://codeforces.com/problemset/problem/282/A

int main() {
    int n;
    int sum = 0;
    string state;
    cin >> n;
    vector<string> statements(n);
    for (int i = 0; n > i; i++) {
        cin >> state;
        transform(state.begin(), state.end(), state.begin(), ::tolower);
        statements[i] = state;
    }
    for (int i = 0; n > i; i++) {
        if (statements[i] == "++x" || statements[i] == "x++") {
            sum++;
        }
        else if (statements[i] == "--x" || statements[i] == "x--") {
            sum--;
        }
    }
    cout << sum;
    return 0;
}