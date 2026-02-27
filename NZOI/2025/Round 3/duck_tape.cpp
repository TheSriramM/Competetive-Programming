// WOW I UNDERSTAND THE SOLUTION CODE
// DO AGAIN LATER TO MAKE SURE I REMEMBER
// DONE ON 26/10/25

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, e;
    cin >> n >> s >> e;

    vector<pair<int, int>> tapes;
    
    for(int i = 0; i < n; i++){
        pair<int, int> tape;
        cin >> tape.first >> tape.second;
        tapes.push_back(tape);
    }

    sort(tapes.begin(), tapes.end()); // Sort by starting position of the tapes

    int end = s - 1;
    for(auto [si, se] : tapes){
        if(end + 1 < si) break;
        else end = max(end, se);
    }

    if(end >= e) cout << "1" << "\n";
    else cout << "0" << "\n";
}