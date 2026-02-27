#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int a,b;
    int x,y;
    vector<int> output;
    cin >> t;
    for(int i = 0;i<t;i++){
        vector<int> kingCoords;
        vector<int> queenCoords;
        vector<int> knightRules;
        vector<vector<int>> kkCheck;
        vector<vector<int>> qqCheck;
        int sum;
        cin >> a >> b;
        knightRules.push_back(a);
        knightRules.push_back(b);
        cin >> x >> y;
        kingCoords.push_back(x);
        kingCoords.push_back(y);
        cin >> x >> y;
        queenCoords.push_back(x);
        queenCoords.push_back(y);
        // Check the 8 possible positions where the knight attacks the king
        // Pick x movement for knight and check four possible x movements
        // Then check for y movement for left and right for up and down movements and up and down y movements for up and down y movements
        // Append the possible coordinates in a multidimensional vector
        // Do the same for the queen
        // Output the number of cases that match
        int knightX=knightRules.at(0);
        int knightY=knightRules.at(1);
        int kingX=kingCoords.at(0);
        int kingY=kingCoords.at(1);
        int queenX=queenCoords.at(0);
        int queenY=queenCoords.at(1);
        // First pair
        kkCheck.push_back({kingX+knightX, kingY+knightY});
        kkCheck.push_back({kingX+knightX, kingY-knightY});
        // Second pair
        kkCheck.push_back({kingX-knightX, kingY+knightY});
        kkCheck.push_back({kingX-knightX, kingY-knightY});
        // Third pair
        kkCheck.push_back({kingY+knightX, kingX+knightY});
        kkCheck.push_back({kingY+knightX, kingX-knightY});
        // Fourth pair
        kkCheck.push_back({kingY-knightX, kingX+knightY});
        kkCheck.push_back({kingY-knightX, kingX-knightY});
        // All possible coords where the knight checks the king
        // Do the same for the queen
        // First pair
        qqCheck.push_back({queenX+knightX, queenY+knightY});
        qqCheck.push_back({queenX+knightX, queenY-knightY});
        // Second pair
        qqCheck.push_back({queenX-knightX, queenY+knightY});
        qqCheck.push_back({queenX-knightX, queenY-knightY});
        // Third pair
        qqCheck.push_back({queenY+knightX, queenX+knightY});
        qqCheck.push_back({queenY+knightX, queenX-knightY});
        // Fourth pair
        qqCheck.push_back({queenY-knightX, queenX+knightY});
        qqCheck.push_back({queenY-knightX, queenX-knightY});
        for(vector<int> item : kkCheck){
            int count_no = count(qqCheck.begin(), qqCheck.end(), item);
            sum += count_no;
        }
        output.push_back(sum);
    }
    for(int item: output){
        cout << item << endl;
    }
}