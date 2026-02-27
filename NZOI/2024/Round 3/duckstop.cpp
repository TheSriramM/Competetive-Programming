#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, c, a;
    vector<int> days;
    long long ducks;
    long long dollars;
    long long smallest = 0;
    bool higher = false;
    cin >> d >> c >> a;

    for(int i = 0; i < d; i++){
        int num;
        cin >> num;
        days.push_back(num);
    }

    for(int i = 0; i < d; i++){
        if(smallest == 0){
            if(days[i] <= a) {

                // Need to check if there is a higher price that the ducks can be sold at

                for(int j = i; j < d; j++){
                    if(days[j] > days[i]) higher = true;
                }

                if(higher) {
                    ducks = c/days[i];
                    dollars = c - days[i]*ducks;
                    smallest = days[i];
                    higher = false;
                    cout << "BUY " << ducks << "\n";
                }

                else cout << "WAIT" << "\n";

            }

            else cout << "WAIT" << "\n";
        }
        else {

            if(days[i] > smallest) {
                dollars = ducks * days[i] + dollars;
                cout << "SELL " << ducks << "\n";
                smallest = 0;
                ducks = 0;
            }

            else cout << "HOLD" << "\n";

        }
    }
    cout << dollars - c << "\n";
}