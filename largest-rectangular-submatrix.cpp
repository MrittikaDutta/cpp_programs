/*Given a matrix mat[][] of size N x M. The task is to find the largest rectangular sub-matrix by area whose sum is 0.
If there are multiple solutions return the rectangle which starts from minimum column index. If you still have multiple solutions 
return the one starting from minimum row index. If you still have multiple solutions return the one having greatest row number.
 If no such matrix is present return a zero (0) size matrix.*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> sumZeroMatrix(vector<vector<int>>& a) {
        auto kadane = [](vector<int>& arr) {
            int n = arr.size();
            int curr_sum = 0;
            int max_sum = INT_MIN;
            unordered_map<int, int> sum_index;
            int max_len = 0;
            int end_row = -1;
            
            sum_index[0] = -1;
            
            for (int i = 0; i < n; ++i) {
                curr_sum += arr[i];
                if (sum_index.find(curr_sum) != sum_index.end()) {
                    int len_subarray = i - sum_index[curr_sum];
                    if (len_subarray > max_len) {
                        max_len = len_subarray;
                        end_row = i;
                    }
                }
                
                if (sum_index.find(curr_sum) == sum_index.end()) {
                    sum_index[curr_sum] = i;
                }
            }
            
            return make_pair(end_row, max_len);
        };
        
        int N = a.size();
        int M = (N > 0) ? a[0].size() : 0;
        
        int max_sum = INT_MIN;
        pair<int, int> result = {-1, 0};
        
        for (int left = 0; left < M; ++left) {
            vector<int> temp(N, 0);
            for (int right = left; right < M; ++right) {
                for (int i = 0; i < N; ++i) {
                    temp[i] += a[i][right];
                }
    
                auto [row_end, row_len] = kadane(temp);
    
                int current_sum = row_len * (right - left + 1);
                if (current_sum > max_sum || (current_sum == max_sum && left < result.first)) {
                    max_sum = current_sum;
                    result = {left, row_end};
                }
            }
        }
        
        if (result.first == -1) {
            return {};
        }
        
        vector<vector<int>> submatrix;
        for (int i = result.second - max_sum + 1; i <= result.second; ++i) {
            vector<int> row(a[i].begin() + result.first, a[i].begin() + result.second + 1);
            submatrix.push_back(row);
        }
        
        return submatrix;
    }
};

class IntArray {
public:
    vector<int> Input(int n) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        return arr;
    }

    void Print(const vector<int>& arr) {
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }
};

class IntMatrix {
public:
    vector<vector<int>> Input(int n, int m) {
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }
        return matrix;
    }

    void Print(const vector<vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;

    for (int _ = 0; _ < t; ++_) {
        IntArray intArray;
        IntMatrix intMatrix;
        
        auto nm = intArray.Input(2);  // Fix: Declare 'nm' here
        vector<vector<int>> a = intMatrix.Input(nm[0], nm[1]);

        Solution obj;
        vector<vector<int>> res = obj.sumZeroMatrix(a);

        if (res.empty()) {
            cout << -1 << endl;
        } else {
            intMatrix.Print(res);
        }
    }

    return 0;
}


