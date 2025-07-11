#include<iostream>
#include <iostream> // For input and output operations
#include <vector>   // For using vectors
#include <stack>    // For using stacks
#include <queue>    // For using queues
#include <algorithm> // For using algorithms like sort, find, etc.
#include <cmath>    // For mathematical operations and functions
#include <string>   // For string operations
#include <map>      // For using maps
#include<list>
#include <set>      // For using sets
#include <iomanip>  // For input/output manipulations
using namespace std;
int main(){
    int n,i,a;
    cin>>n;
    stack<int>s;
    s.push(1);
    for(i=0;i<n;i++){
        cin>>a;
        s.push(a);
    }
    
    while (!s.empty()) {
        std::cout << s.top() << " ";  // Access the top element of the stack
        s.pop();  // Remove the top element from the stack
    }
    return 0;
}