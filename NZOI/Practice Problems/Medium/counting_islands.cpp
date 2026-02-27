#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> grid;
    int w, h, t;
    cin >> w >> h >> t;
    for(int i = 0; i < h; i++){
        vector<char> row;
        for(int j = 0; j < w; j++){
            char item;
            cin >> item;
            
            row.push_back(item);
        }
        grid.push_back(row);
    }
}