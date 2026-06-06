#include<bits/stdc++.h>
using namespace std; 

void printSum(int i, int sum) {  //parameterised recursion
    if(i<1) {
        cout << sum; 
        return; 
    }
    printSum(i-1, sum+i); 
}
int printSum2(int n){ // functional recursion
    if(n == 0) {
        return 0; 
    }
    return n + printSum2(n-1); 
} 

int main() { 
    
    int n; 
    cin >> n;

    printSum(n, 0);
    
    return 0;  
}