#include <iostream>
using namespace std;

int main() {
    int age,req;
    cin >> age;
    cin >> req;
    age /= 2;
    if (age < req) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
    return 0;
}