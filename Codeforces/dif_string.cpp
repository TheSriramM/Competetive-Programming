#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string word;
        vector<char> chars;
        vector<char> full_chars;
        cin >> word;
        for(char letter : word){
            full_chars.push_back(letter);
            auto it = find(chars.begin(), chars.end(), letter);
            if(it == chars.end()){
                chars.push_back(letter);
            }
        }
        if(chars.size() == 1){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
            vector<char> new_word = full_chars;
            do{
            char start = new_word[0];
            new_word.erase(new_word.begin());
            new_word.push_back(start);
            }while(new_word == full_chars);
            for(char item : new_word){
                cout << item;
            }
            cout << "\n";
        }
    }
    return 0;
}