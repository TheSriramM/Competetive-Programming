#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int middle, MIDDLE;

    if(n%2==0) {
        middle = n/2;
        MIDDLE = n/2;
    }
    else{
        middle = (n/2)+1;
        MIDDLE = (n/2)+1;
    }

    int dif = n-middle;

    for(int i = 0; i < MIDDLE; i++) {
        cout << middle << " " << middle + dif << " ";
        middle--;
    }
}