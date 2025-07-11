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