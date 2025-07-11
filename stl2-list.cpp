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
    list<int> ls;
    ls.push_back(2);
    ls.__emplace_back(4);
    ls.push_front(5);
    
    for(list<int>::iterator it=ls.begin(); it!=ls.end(); it++){
        cout<< *(it)<<" ";
    }
    return 0;
}