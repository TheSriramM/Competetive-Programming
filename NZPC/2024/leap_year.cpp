#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, year;
    int cur_year = 2024;
    bool leap;
    cin >> n;
    vector<int> years(n);
    for (int i = 0; n > i; i++) {
        cin >> year;
        years[i] = year;
    }
    for (int i = 0; n > i; i++) {
        if (years[i] % 400 == 0) {
            leap = true;
        }
        else if (years[i] % 100 == 0) {
            leap = false;
        }
        else if (years[i] % 4 == 0) {
            leap = true;
        }
        else {
            leap = false;
        }
        // Print the result with the correct tense
        if (years[i] == cur_year) {
            cout << years[i] << " is a leap year." << '\n';
        }
        else if (years[i] > 2024) {
            if (leap) {
                cout << years[i] << " will be a leap year." << '\n';
            }
            else {
                cout << years[i] << " will be a common year." << '\n';
            }
        }
        else if (years[i] < 2024) {
            if (leap) {
                cout << years[i] << " was a leap year." << '\n';
            }
            else {
                cout << years[i] << " was a common year." << '\n';
            }
        }
    }
}