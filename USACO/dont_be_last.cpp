#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    map<string, int> milk_nos;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int no;
        string name;
        cin >> name >> no;
        milk_nos[name] = no;
    }
    // for (const auto& pair : milk_nos) {
    //     cout << pair.first << " " << pair.second << endl;
    // }
}