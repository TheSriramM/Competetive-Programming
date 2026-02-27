#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int cnt = 0;
        bool alice = true;
        cin >> n;
        vector<int> nums;
        for(int i = 0; i < n; i++){
            int no;
            cin >> no;
            nums.push_back(no);
        }
        int mx = 0;
        bool odd = false;
        for(int item : nums){
            int itemCount = count(nums.begin(), nums.end(), item);
            if(itemCount % 2 == 1){
                odd = true;
            }
        }
        if(odd) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
}