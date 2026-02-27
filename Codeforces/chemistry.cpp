// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;

// Only the number of one letter can be odd if the string can be rearranged into a palindrome
// For example: bcaaacb - there are 3 a's and 2 b's and c's

// Test case 9 works when tried individually but doesn't work when all 14 cases done together

// YAYYAYAYYAYYAYYAYYAY I GOT IT

int main() {
    int t;
    vector<string> output;
    cin >> t;
    while(t--){
        int k, n;
        cin >> k >> n;
        string s;
        int oddChars = 0;
        cin >> s;
        map<char, int> letterCount;
        for(char letter : s) letterCount[letter]++;
        for(const auto& pair : letterCount){
            if(pair.second % 2 == 1) oddChars++;
        }
        if(oddChars-1 > n) output.push_back("NO");
        else output.push_back("YES");
    }
    for(string item : output) cout << item << "\n";
}