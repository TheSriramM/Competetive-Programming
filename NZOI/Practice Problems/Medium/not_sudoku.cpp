#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> grid;
    int r, c;
    int y_coord;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        vector<char> row;
        for(int j = 0; j < c; j++){
            char item;
            cin >> item;
            if(item == 'x'){
                y_coord = j;
            }
            row.push_back(item);
        }
        grid.push_back(row);
    }
    vector<int> curNums;
    for(int i = 0; i < r; i++){
        if(grid[i][y_coord] != 'x'){
            curNums.push_back(grid[i][y_coord]);
        }
    }
    for(int item : curNums) cout << item;
}