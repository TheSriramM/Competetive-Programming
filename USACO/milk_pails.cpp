#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b, c; cin >> a >> b >> c;
    int first_no = c / a;
    int closest = 0;
	// try all the combinations of a and b
    for (int first = 0; first <= first_no; first++) {
        // c_remainder = 77 - 12 * first
        int c_remainder = c - first * a;
        // second no = 77 / 25
        int second_no = c_remainder / b;
        if(first * a + b * second_no > closest && first * a + b * second_no <= c) closest = first * a + b * second_no;
        if(closest == c) break;
    }
    cout << closest << "\n";
}