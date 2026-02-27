// Official solution not submitted
// Goal is to understand all of the code

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int main() {
    int N;
    cin >> N;
    while (N--) {
    string A;
    int X;
    cin >> A >> X;
    vector<vector<ii>> dp(A.size(), vector<ii>(X, {-1, -1}));
    dp[0][(A[0] - '0') % X] = {1, 0};
    for (int i = 1; i < A.size(); ++i) {
        for (int j = 0; j < X; ++j) dp[i][j] = {dp[i - 1][j].first, -1};
        int charVal = (A[i] - '0') % X;
        for (int j = 0; j < X; ++j) {
        if (dp[i - 1][j].first == -1) continue;
        int nextPos = (j * 10 + charVal) % X;
        dp[i][nextPos] = max(dp[i][nextPos], {dp[i - 1][j].first + 1, j});
        }
        if (A[i] != '0' && dp[i][charVal].first == -1) dp[i][charVal] = {1, 0};
    }
    if (dp.back()[0].first != -1) {
        string ans;
        int pos = 0;
        for (int i = A.size() - 1; i >= 0; --i) {
            if (dp[i][pos].second >= 0) {
                ans.push_back(A[i]);
                pos = dp[i][pos].second;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
    else if (A.find_first_of('0') != A.npos) cout << "0\n";
    else cout << "-1\n";
    }
    return 0;
}