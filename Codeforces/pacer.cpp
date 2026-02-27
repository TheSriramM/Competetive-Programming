// YAYYAYAYYYAYAYYA Passed 1st try

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> output;

    while(t--) {
        long long requirements, minutes;
        cin >> requirements >> minutes;

        // Define useful variables

        long long score = 0;
        long long cur_pos = 0;
        long long minute_dif = 0;
        long long cur_minute = 0;

        for(int i = 0; i < requirements; i++){
            int min, side;
            cin >> min >> side;

            // Update the variables

            minute_dif = min - cur_minute;
            cur_minute = min;

            // If minute difference is even and the side goal is opposite then you have to wait
            // If the minute difference is even and the side goal is the same then you don't need to wait

            // If minute difference is odd and the side goal is opposite then you don't need to wait
            // If minute difference is odd and the side goal is the same you have to wait

            // Minute difference is even
            if(minute_dif % 2 == 0){
                if(side != cur_pos){
                    // Need to wait
                    score += minute_dif - 1;
                    cur_pos = side;
                }

                else{
                    score += minute_dif;
                }
            }

            else {
                if(side != cur_pos){
                    score += minute_dif;
                    cur_pos = side;
                }
                else{
                    score += minute_dif - 1;
                }
            }
        }

        if(cur_minute < minutes){
            score += minutes - cur_minute;
        }

        output.push_back(score);
    }

    for(int item : output) {
        cout << item << "\n";
    }
}