#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<string> output;
    cin >> t;
    while(t--){
        int n;
        vector<int> points;
        cin >> n;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            points.push_back(num);
        }
        int first = points.front();
        int last = points.back();
        if(n > 2) output.push_back("NO");
        else{
            if(first + 1 == last) output.push_back("NO");
            else output.push_back("YES");
        }
        // if((last_el - front_el) % 2 == 0){
        //     int close = front_el + (last_el - front_el)/2;
        //     int dif = (last_el - front_el)/2;
        //     for(int item : points){
        //         if(abs(item - close) != dif){
        //             yes = false;
        //         }
        //     }
        // }
    }
    for(string item : output) cout << item << "\n";
}