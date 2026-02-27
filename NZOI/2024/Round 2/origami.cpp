#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    
    int first = (x/a)*(y/b);
    int second = (x/b)*(y/a);

    cout << max(first, second) << "\n";
}