#include<bits/stdc++.h>
using namespace std; 

int factorial(int n) {
    int fact;
    if(n == 1 || n == 0) {
        return 1;
    }
    fact = n * factorial(n-1);
    return fact; 
}
int main() { 
    
    int n; 
    cin >> n;

    cout << factorial(n); 
    
    return 0;  
}