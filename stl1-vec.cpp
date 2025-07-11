#include <iostream>
#include <string>
#include <sstream>
//#include <bits/stdc++.h>
#include <iomanip>      // std::setprecision
#include <math.h> 
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

    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int, int> >vec;

    vector<int>v1(5,20);
    vector<int>v2(v1);

    vector<int>::iterator it=v.begin();
    it++;
    cout << *(it)<<" ";

    it=it+2;
    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";
    
    for(vector<int>::iterator it=v.begin(); it !=v.end();it++){
        cout<< *(it)<<" ";
    }
    for(auto it =v.begin(); it!=v.end(); it++){
        cout<< *(it)<<" ";
    }
    for(auto it:v){
        cout<< it <<" ";
    }
    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);

    for(auto it:v){
        cout<< it <<" ";
    }
    return 0;
}