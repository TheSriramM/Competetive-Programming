#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<int> output;
    cin >> t;
    while(t--){
        long long num;
        cin >> num;
        long long time = 0;
        if(num < 6) time = 15;
        else{
            if(num%2==1) num++;
            // 2.5 per slice
            time = num*2.5;
        }
        cout << time << endl;
    }
}