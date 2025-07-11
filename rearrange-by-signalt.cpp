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
vector<int> rearrangearr(vector <int>&a){
    vector<int>pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }

    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            a[index]=neg[i];
            index++;
        }
    }
    return a;
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