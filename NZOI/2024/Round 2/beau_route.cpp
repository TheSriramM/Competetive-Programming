// First Attempt

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int middle, MIDDLE;

//     if(n%2==0) {
//         middle = n/2;
//         MIDDLE = n/2;
//     }
//     else{
//         middle = (n/2)+1;
//         MIDDLE = (n/2)+1;
//     }

//     int dif = n-middle;

//     for(int i = 0; i < MIDDLE; i++) {
//         cout << middle << " " << middle + dif << " ";
//         middle--;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int start = n/2;
    int current = n;
    vector<int> path;
    path.push_back(n/2);
    path.push_back(n);

    vector<int> mountains;
    for(int i = 1; i < n+1; i++) mountains.push_back(i);
    mountains.erase(remove(mountains.begin(), mountains.end(), start), mountains.end());

    while (!mountains.empty())
    {
        if(current == mountains.back()){
            mountains.pop_back();

            if(!mountains.empty()) {
                current = mountains.front();
                path.push_back(current);
            }
            else break;
        }
        
        else if(current == mountains.front()){
            mountains.erase(mountains.begin());
            if(!mountains.empty()){
                current = mountains.back();
                path.push_back(current);
            }
            else break;
        }
    }
    
    for(int item : path) cout << item << " ";
}