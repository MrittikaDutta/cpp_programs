#include <iostream> // For input and output operations
#include <vector>   // For using vectors
#include <stack>    // For using stacks
#include <queue>    // For using queues
#include <algorithm> // For using algorithms like sort, find, etc.
#include <cmath>    // For mathematical operations and functions
#include <string>   // For string operations
#include <map>      // For using maps
#include <set>      // For using sets
#include <iomanip>  // For input/output manipulations
using namespace std;
int main(){
    
    return 0;
}
class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int l = 0;
        int r = n - 1;
        int res = 0, maxleft = 0, maxright = 0;

        while (l <= r) {
            if (h[l] <= h[r]) {
                if (h[l] >= maxleft)
                    maxleft = h[l];
                else
                    res += maxleft - h[l];
                l++;
            } else {
                if (h[r] >= maxright)
                    maxright = h[r];
                else
                    res += maxright - h[r];
                r--;
            }
        }
        return res;
    }
};