#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int palindromicPartition(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int cl = 2; cl <= n; cl++) {
        for (int i = 0; i < n - cl + 1; i++) {
            int j = i + cl - 1;
            if (isPalindrome(s, i, j)) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = INT_MAX;
                for (int k = i; k < j; k++) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + 1);
                }
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    string str1 = "ababbbabbababa";
    string str2 = "aaabba";
    cin>>str1;
    cin>>str2;
    cout << palindromicPartition(str1) << endl;  // Output: 3
    cout << palindromicPartition(str2) << endl;  // Output: 1

    return 0;
}