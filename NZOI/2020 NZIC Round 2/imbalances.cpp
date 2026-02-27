#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t; 
    cin >> n >> t;
    multiset<int> nums;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums.insert(num);
    }
    
    while(t--){
        if (nums.size() <= 1) break; 

        int smallest = *nums.begin();
        int largest = *nums.rbegin(); 

        if (largest - smallest <= 1) break; 

        auto largest_it = --nums.end(); 
        nums.erase(largest_it);
        nums.insert(largest - 1);
        
        nums.erase(nums.begin());
        nums.insert(smallest + 1);
    }
    
    cout << *nums.rbegin() - *nums.begin() << "\n";
    return 0;
}