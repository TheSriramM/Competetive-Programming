#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> output;

    while(t--) {
        int n;
        cin >> n;

        int good_count = 0;

        vector<int> nums;
        for(int i = 0; i < n; i++) {
            long long no;
            cin >> no;
            nums.push_back(no);        
        }
        vector<int> prefix_vector;

        for(int i = 1; i < n+1; i++) {
            // Prefix no
            if(i!=1) {
                prefix_vector.push_back(nums[i-1]);
                auto largest = max_element(prefix_vector.begin(), prefix_vector.end());
                int largest_num = *largest;
                prefix_vector.erase(largest);
                int other_elements_total = 0;
                for(int item : prefix_vector) {
                    other_elements_total += item;
                }

                if(other_elements_total == largest_num) good_count++;
            }

            else {
                prefix_vector.push_back(nums[0]);
                if(nums[0] == 0) good_count++;
            }

        }

        output.push_back(good_count);
    }

    for(int item : output) cout << item << "\n";
}