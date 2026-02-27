// ACCEPTED
// FIRST PROBLEM SOLVED AFTER ALL MY EXAMS HAVE FINISHED IN Y11 !!!

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<string> output;

    cin >> t;

    while(t--){
        int length;
        int x;
        multiset<int> nums;

        cin >> length;

        for(int i = 0; i < length; i++){
            int num;
            cin >> num;
            nums.insert(num);
        }

        cin >> x;

        int smallest = *nums.begin();
        int largest = *nums.rbegin();

        if(smallest <= x && x <= largest) {
            output.push_back("YES");
        }
        else {
            output.push_back("NO");
        }
    }

    for(string item : output) {
        cout << item << "\n";
    }

}