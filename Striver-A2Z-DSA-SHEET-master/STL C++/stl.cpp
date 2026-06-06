#include <bits/stdc++.h>
using namespace std;



int main() {

    // vectors
    vector<int> v = {1, 3, 2, 15, 8, 11, 5, 12, 13};
    
    v.push_back(6);                          // put element at the last index
    v.pop_back();                            // deletes the last element 

    cout << v.size();                        // check size of the vector 
    cout << v.empty();                       // if vector is empty = 1 (true), else 1 (false)

    auto it = v.begin() + 4;                 // iteration value assignment
    v.insert(it, 100);                       // inserting a value after adding key, where to add it
    v.erase(it);                             // deletes specific iteration, index value

    sort(v.begin(), v.end());                // sorting directly
    reverse(v.begin(),v.end());              // reverse the vector

    for(int it : v) {                        // prinitng using for loops
        cout << it << " "; 
    }

    // maps
    map<int, int> mpp = {{1, 100}, {2, 200}, {3, 300}};  // Initialize map with key-value pairs
    mpp[4] = 400;                                  // Insert/update key=4 with value=400
    mpp.emplace(5, 500);                           // Insert key=5 with value=500
    mpp.insert({8, 900});                          // Insert key=8 with value=900

    for(auto it : mpp) {                           // Iterate and print all key-value pairs
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[2] << endl;                        // Print value for key=2

    auto it = mpp.find(3);                                               
    cout << it->second << endl;

    cout << mpp.count(10) << endl;                // Check if key=10 exists (0 = false)
    cout << mpp.count(8) << endl;                 // Check if key=8 exists (1 = true)

    mpp.erase(1);                                 // Remove key=1 and its value

    for (auto it : mpp) {                          // Iterate and print all key-value pairs after erasing key=1
        cout << it.first << " " << it.second << endl;
    }

    //unordered map
    unordered_map<int, int> umpp;
    //all functions same as maps but this is unordered. 

    // set
    set<int> st;            // Declare an empty set
    st.insert(1);           // Insert element 1
    st.emplace(2);          // Insert element 2
    st.insert(2);           // Duplicate, ignored (sets store unique elements)
    st.insert(4);           // Insert element 4
    st.insert(3);           // Insert element 3

    // Set now contains {1, 2, 3, 4}

    auto it = st.find(3);   // Get iterator pointing to element 3

    st.erase(2);            // Remove element 2 from the set

    cout << st.count(1) << endl;  // Check if element 1 exists (1 = true, 0 = false)

    // Set now contains {1, 3, 4}

    auto it1 = st.find(1);  // Iterator to element 1
    auto it2 = st.find(3);  // Iterator to element 3
    st.erase(it1, it2);     // Erases elements in the range [it1, it2), i.e., removes 1 and 2
 

    // pair
    // Declare and initialize a pair
    pair<int, string> p1 = {1, "Apple"}; // Pair with int and string
    pair<int, int> p2(2, 200); // Pair with two integers

    // Accessing elements of a pair
    cout << p1.first << " " << p1.second << endl; // Output: 1 Apple
    cout << p2.first << " " << p2.second << endl; // Output: 2 200

    // Modify elements of a pair
    p1.first = 10; // Change first element to 10
    p1.second = "Banana"; // Change second element to "Banana"

    // Create a pair using make_pair
    auto p3 = make_pair(3, 300); // Creates a pair with values 3 and 300

    // Swap two pairs
    pair<int, int> p4 = {4, 400};
    pair<int, int> p5 = {5, 500};
    p4.swap(p5); // Swaps the values of p4 and p5

    // Print the swapped pairs
    cout << p4.first << " " << p4.second << endl; // Output: 5 500
    cout << p5.first << " " << p5.second << endl; // Output: 4 400

    // stack - LIFO - last in first out
    stack<int> st;  // Declare an empty stack

    st.push(1);     // Push element 1 onto the stack 
    st.push(2);     // Push element 2 onto the stack (2, 1)
    st.push(3);     // Push element 3 onto the stack (3, 2, 1)
    st.push(3);     // Push element 3 onto the stack (3, 3, 2, 1)
    st.push(5);     // Push element 5 onto the stack (5, 3, 3, 2, 1)

    st.pop();       // Remove the top element from the stack , removes 5; 

    cout << st.top() << endl;  // Access the top element, prints 3

    cout << st.empty() << endl;  // Check if the stack is empty (1 = true, 0 = false) 
    cout << st.size() << endl;   // Get the number of elements in the stack

    stack<int> st1, st2;
    st1.swap(st2); 

    // queue - FIFO - first in first out
    queue<int> q;
    q.push(1); //{1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() +=5;
    
    cout << q.back(); // prints 9

    // q is {1, 2, 9}
    cout << q.front(); // prints 1 

    q.pop(); // {2, 9}

    q.front(); //prints 2

    // size swap empty same as stack

    // priority_queue

    // ----> Max-Heap priority queue
    priority_queue<int> pq;

    pq.push(5);    // {5}
    pq.push(2);    // {5, 2}
    pq.push(8);    // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << endl; // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top() << endl; // prints 8

    // ----> Min-Heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);    // {5}
    pq.push(2);    // {2, 5}
    pq.push(8);    // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top() << endl; // prints 2

    //deque 
    deque<int> dq;
    dq.push_back(1);          // O(1)
    dq.push_front(2);         // O(1)
    dq.pop_back();            // O(1)
    dq.pop_front();           // O(1)
    dq[i]                     // O(1)

    //List
    list<int> ls = {1, 2, 3};
    ls.push_back(4);   // {1, 2, 3, 4}
    ls.push_front(0);  // {0, 1, 2, 3, 4}

    auto it = ls.begin();
    ls.insert(it, -1);  // Insert at iterator: {-1, 0, 1, 2, 3, 4}

    it = ls.begin();
    ++it;  // Move iterator to the second element (0)
    ls.erase(it);  // Erase at iterator: {-1, 1, 2, 3, 4}



    // **Algorithms**
    //->Sort 
    sort(v.begin(), v.end());              // ascending
    sort(v.begin(), v.end(), greater<int>()); // descending
    sort(v.begin(), v.end()) 

    // ->Min/Max
    *min_element(v.begin(), v.end());
    *max_element(v.begin(), v.end());

    // ->Count/find
    count(v.begin(), v.end(), x);
    find(v.begin(), v.end(), x);  // returns iterator

    // -> Reverse
    reverse(v.begin(), v.end());

    // -> Accumulate(sum) 
    accumulate(v.begin(), v.end(), 0);  // sum with init 0

    //binary count 
    int num = 7;
    int cnt = __builtin_popcount(num); //prints 3 

    //next permutation
    string s = "123"; 

    do {
        cout << s << endl; 
    } while (next_permutation(s.begin(), s.end())); 

    return 0;
}