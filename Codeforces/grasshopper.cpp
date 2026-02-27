// https://codeforces.com/problemset/problem/1607/B
// WHAT IS WRONG!!!!!!!!

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    vector<int> output;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long x, n;
        cin >> x >> n;
        long long cycles = n / 4;
        int rem = n % 4;
        if (x % 2 == 0){
            x -= cycles * 2;
        }
        else {
            x += cycles * 2;
        }
        long long j_start = (n/4)*4+1;
        for (long long j = j_start; j <= n; j++){
            if (x % 2 == 0){
                x -= j;
            }
            else {
                x += j;
            }
        }
        output.push_back(x);
    }
    for(int item : output){
        cout << item << "\n";
    }
    return 0;
}