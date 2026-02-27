#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<string> phrases;
    cin >> t;

    // FIX 1: Clear the newline character left in the buffer after reading 't'.
    // This ignores characters up to the next newline.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Clear the input buffer when using getline() repeatedly
    
    while(t--){
        string characters;
        getline(cin, characters);
        phrases.push_back(characters);
    }
    char letter;
    cin >> letter;
    for(string phrase : phrases){
        int cnt = count(phrase.begin(), phrase.end(), letter);
        cout << cnt << "\n";
    }
}