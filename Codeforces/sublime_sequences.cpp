// https://codeforces.com/problemset/problem/2132/B

// Super Easy Problem
// Splved it in 2 min

#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        if(n%2==1) cout << x << "\n";
        else cout << 0 << "\n";
    }
}