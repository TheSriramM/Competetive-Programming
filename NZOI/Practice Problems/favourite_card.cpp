#include <bits/stdc++.h>
using namespace std;

int main() {
    int no, fav, card;
    int card_no = -1;
    cin >> no >> fav;
    for (int i = 0; no >= i; i++) {
        cin >> card;
        card_no++;
        if (card == fav) {
            break;
        }
    }
    cout << card_no;
}