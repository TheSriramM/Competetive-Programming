#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<string> output;
    cin >> t;
    while(t--){
        string word;
        string output_word;
        vector<char> chars;
        cin >> word;
        for(char letter : word) chars.push_back(letter);
        reverse(chars.begin(), chars.end());
        for(char item : chars){
            if(item == 'p') output_word += "q";
            else if(item == 'q') output_word += "p";
            else if(item == 'w') output_word += "w";
        }
        output.push_back(output_word);
    }
    for(string item : output) cout << item << "\n";
}