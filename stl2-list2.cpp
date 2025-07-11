#include<iostream>
#include <list>      // Include the list header for using lists
using namespace std;

int main(){
    list<int> ls;   // Create a linked list of integers

    ls.push_back(2);         // Add 2 to the end of the list
    ls.__emplace_back(4);      // Construct and add 4 to the end of the list
    ls.push_front(5);        // Add 5 to the front of the list

    // Iterate through the list and print each element
    for(list<int>::iterator it=ls.begin(); it!=ls.end(); it++){
        cout << *(it) << " ";  // Dereference the iterator to get the element
    }

    return 0;  // Return 0 to indicate successful completion
}
