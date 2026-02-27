#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/2148/problem/D

// Go to the largest odd numbered field first
// Then go to all the even fields
// Then go to the smallest odd numbered field

int main() {
    int t;
    cin >> t;

    vector<int> output;

    while(t--) {
            int n;
    vector<int> field_nos;
    cin >> n;

    multiset<int> odd_nums;
    int even_total = 0;
    int total = 0;

    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;

        // While receiving the number
        // Check if it is odd or even
        if((ai/2)*2 == ai) {
            even_total += ai;
        }
        else{
            // odd
            odd_nums.insert(ai);
        }

        field_nos.push_back(ai);
    }

    if(odd_nums.empty()) {
        total = 0;
    }
    else{
        int largest = *odd_nums.rbegin();
        total += largest + even_total;
        odd_nums.erase(std::prev(odd_nums.end()));

        while(!odd_nums.empty()) {
            int smallest = *odd_nums.begin();
            odd_nums.erase(odd_nums.begin());
            if(odd_nums.empty()) break;
            else {
                int nlargest = *odd_nums.rbegin();
                total += nlargest;
                 odd_nums.erase(std::prev(odd_nums.end()));
            }
        }
    }

    output.push_back(total);
    }



    for(int item : output) cout << item << "\n";
}