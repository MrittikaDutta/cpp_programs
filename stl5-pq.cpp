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
    priority_queue<int>q;
    q.push(1);
    q.push(4);
    q.push(10);
    q.push(41);
    cout<<q.top();

    return 0;
}