#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    vector<string> output;
    cin >> t;
    while(t--){
        int n, j, k;
        vector<int> nums;
        cin >> n >> j >> k;
        while(n--){
            int num;
            cin >> num;
            nums.push_back(num);
        }
        if(k>1) output.push_back("YES");
        else{
            int largest = *max_element(nums.begin(), nums.end());
            if(j==largest) output.push_back("YES");
            else output.push_back("NO");
        }
    }
    for(string item : output) cout << item << "\n";
}