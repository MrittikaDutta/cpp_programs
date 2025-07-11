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
vector<int> rearrangearr(vector <int>&nums){
    int n=nums.size();
    vector<int>ans(n,0);
    int pos=0,neg=1;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[neg]=nums[i];
            neg+=2;
        }
        else{
            ans[pos]=nums[i];
            pos+=2;
        }
    }
    return ans;
}
int main(){
    int n,i;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=rearrangearr(arr);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}