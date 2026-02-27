#include <bits/stdc++.h>
using namespace std;

int main() {
    int steps;
    int a, b, c, d;
    bool john = true, mary = true;
    int johnSum = 0, marySum = 0;
    int johnCount = 0, maryCount = 0;
    cin >> steps;
    cin >> a >> b >> c >> d;
    while (johnSum < steps)
    {
        if(john){
            johnSum += a;
            john = false;
        }
        else{
            johnSum += b;
            john = true;
        }
        johnCount++;
    }
    while (marySum < steps)
    {
        if(mary){
            marySum += c;
            mary = false;
        }
        else{
            marySum += d;
            mary = true;
        }
        maryCount++;
    }
    cout << maryCount - johnCount << "\n";
}