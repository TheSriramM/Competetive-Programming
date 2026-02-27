// https://codeforces.com/problemset/problem/1351/B?mobile=false

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        vector<int> dims;
        bool square;
        int x1, y1;
        int x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        dims.push_back(x1);
        dims.push_back(y1);
        dims.push_back(x2);
        dims.push_back(y2);
        for(int item : dims){
            int cnt = count(dims.begin(), dims.end(), item);
            if(cnt > 2) square = false;
        }
        int area = (x1*y1)+(x2*y2);
        double square_double = sqrt(area);
        int square_int = sqrt(area);
        if(square_double == square_int) square = true;
        else square = false;
        if(square) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    return 0;
}