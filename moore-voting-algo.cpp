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
int moore(vector<int>v,int n){
    int cnt=0,c=0;
    int el,i;
    for(i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=v[i];
        }
        else if(v[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    for(i=0;i<n;i++){
        if(v[i]==el) c++;
    }
    if(c>(n/2)){
        return el;
    }
    return -1;
}
int main(){
    int n,i;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << moore(arr, n);
    
    return 0;
}