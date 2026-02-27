// YAYAYAYAYAYAYAYAYAYAYAYAYAYA Passed
// https://train.nzoi.org.nz/problems/779

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> grid;
    map<char, int> hitCount;
    for(int i = 0; i < 10; i++) { // 10 rows in the grid
        vector<char> row;
        for(int j = 0; j < 10; j++) { // 10 columns in the grid
            char item;
            cin >> item;
            row.push_back(item);
        }
        grid.push_back(row);
    }
    while(true){
        int x, y;
        cin >> x >> y;
        if(x == -1 || y == -1) break;
        char cur = grid[y][x];
        if(cur == '#') cout << "Miss" << "\n";
        else{
            if(cur == 'a') cout << "Sunk a" << "\n";
            else if (cur == 'b'){
                hitCount['b']++;
                if(hitCount['b'] == 2) cout << "Sunk b" << "\n";
                else cout << "Hit b" << "\n";
            }
            else if (cur == 'c'){
                hitCount['c']++;
                if(hitCount['c'] == 3) cout << "Sunk c" << "\n";
                else cout << "Hit c" << "\n";
            }
            else if (cur == 'd'){
                hitCount['d']++;
                if(hitCount['d'] == 4) cout << "Sunk d" << "\n";
                else cout << "Hit d" << "\n";
            }
            else if (cur == 'e'){
                hitCount['e']++;
                if(hitCount['e'] == 5) cout << "Sunk e" << "\n";
                else cout << "Hit e" << "\n";
            }
            else if (cur == 'f'){
                hitCount['f']++;
                if(hitCount['f'] == 6) cout << "Sunk f" << "\n";
                else cout << "Hit f" << "\n";
            }            
        }
    }
}