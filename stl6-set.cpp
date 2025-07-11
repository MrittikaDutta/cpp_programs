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
    set<int>st;
    st.insert(1);
    st.insert(12);
    st.insert(10);

    auto it= st.find(10);
    auto it= st.find(12);

    st.erase(10);
    auto it=st.find(3);
    st.erase(it);

    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);

    auto it2=st.lower_bound(2);
    auto it2=st.upper_bound(3);
    return 0;
}