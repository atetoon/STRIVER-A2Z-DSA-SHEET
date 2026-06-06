#include<bits/stdc++.h>
using namespace std; 
//primt name N times
void printName(int i, int n) {
    if(i>n) {
        return; 
    }
    cout << "xyz" << endl;
    printName(i+1, n); 
}
// print (1 - N)
void print1toN(int i, int n) {
    if(i>n) return;
    cout << i << endl; 
    print1toN(i+1, n);
}
// print (N - 1) 
void printNto1(int n, int i) {
    if(n<i) return;
    cout << n << endl;
    printNto1(n - 1, i); 
}
// print (1 - N) by backtrack
void print1toN_backtrack(int i, int n) {
    if(i<1) {
        return; 
    }
    print1toN_backtrack(i-1, n);
    cout << i << endl;
}
// print (N - 1) by backtrack
void printNto1_backtrack(int i, int n) {
    if(i>n) {
        return; 
    }
    printNto1_backtrack(i+1, n);
    cout << i << endl;
}
int main() {
    
    int n; 
    cin >> n; 
    printName(1, n);
    print1toN(1, n);
    printNto1(n, 1); 
    print1toN_backtrack(n, n);
    printNto1_backtrack(1, n);

    return 0; 
}