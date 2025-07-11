//{ Driver Code Starts
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


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<int>s;
        int i;
        int le=x.length();
        s.push(x[0]);
        for(i=1;i<le;i++){
            if (!s.empty() && ((x[i] == ')' && s.top() == '(') || (x[i] == ']' && s.top() == '[') || (x[i] == '}' && s.top() == '{'))) {
                s.pop();
            }
            else{
                s.push(x[i]);
            }
        }
        return(s.empty());
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends