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
void leftR(int arr[],int n, int d){
    reverse(arr,arr+d);//reverse first part
    reverse(arr+d,arr+n);//reverse 2nd part
    reverse(arr,arr+n);//reverse whole
}
void rightR(int arr[],int n, int d){
    reverse(arr,arr+n);
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
}
int main(){
    int n;
    n=5;
    // cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int d;
    // cin>>d;
    
    rightR(arr,5,2);
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}