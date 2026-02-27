#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<int> output;
    cin >> t;
    while(t--){
        int n, x;
        int num;
        int minFuel;
        string line;
        vector<int> dists;
        cin >> n >> x;
        vector<int> fuelNums;
        for (int i = 0; i < n; ++i) {
            cin >> num;
            fuelNums.push_back(num);
        }
        for(int i = 0; i < n; i++){
            if (i == 0){
                dists.push_back(fuelNums[i]);
            }
            else{
                dists.push_back(fuelNums[i]-fuelNums[i-1]);
            }
            if (i == n-1){
                dists.push_back(2*(x-fuelNums[i]));
            }
        }
        auto max_it = max_element(dists.begin(), dists.end());
        output.push_back(*max_it);
    }
    for(int num : output){
        cout << num << "\n";
    }
    return 0;
}