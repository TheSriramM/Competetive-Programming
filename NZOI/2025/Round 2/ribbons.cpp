#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int length, max_seg, distinct;
    int max = 0;
    int possibilities = 0;
    vector<int> ribbon;
    cin >> length >> max_seg >> distinct;
    for(int i = 0; i < length; i++){
        int num;
        cin >> num;
        ribbon.push_back(num);
    }
    for(int i = 0; i < length; i++){
        int cnt = 0;
        if(i < length-1){
            for(int j = i+1; j < length; j++){
                if(ribbon[i]==ribbon[j]) cnt += 1;
                else break;
            }
        }
        if(cnt+1 == max){
            possibilities += 1;
        }
        else if(cnt+1 > max){
            possibilities = 1;
            max = cnt + 1;
        }
    }
    if(max > max_seg) cout << max_seg;
    else cout << max << " " << possibilities;
}