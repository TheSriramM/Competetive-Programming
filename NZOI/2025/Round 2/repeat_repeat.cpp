#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // Heres the plan
    // A repeating string will have the same letter at s[i], s[i + n], s[i + 2n] and so on
    // If I count the number of times the letter isn't the same in each indice then I should get the answer
    // I could initalise a vector<vector<char>> to store the letters for each indice
    // For each item in the vector above, find the count of the most common character
    // m - the count of the most common character = the amount of characters that need to be replaced for that one indice

    int n, m;
    string t;
    long long tot_replacements = 0;
    string n_guess;
    vector<vector<char>> characters;

    cin >> n >> m;
    cin >> t;

    for (int i = 0; i < n; i++) { 
        vector<char> indice_letters; 
        for (int j = 0; j < m; j++) { 
            int current_index = i + j * n; 
            indice_letters.push_back(t[current_index]);
        }
        characters.push_back(indice_letters);
    }

    for (int i = 0; i < n; i++){ 

        int counts[26] = {0};

        for (char c : characters[i]){
            int index = c - 'A';
            counts[index]++;
        }

        int max_freq = 0;
        char optimum = 'A';

        for (int k = 0; k < 26; k++) {
            if (counts[k] > max_freq) {
                max_freq = counts[k];
                optimum = (char)('A' + k); 
            }
        }

        int replacement_i = m - max_freq;
        tot_replacements += replacement_i;

        n_guess += optimum;
    }

    string final_s = "";
    for (int i = 0; i < m; i++){
        final_s += n_guess;
    }

    cout << tot_replacements << "\n" << final_s << "\n";
    return 0;
}