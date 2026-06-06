#include<bits/stdc++.h>
using namespace std; 

int reverse_a_number(int n) {
    int revN = 0;
    while(n!=0) {
    int last_digit = n%10;

    revN = revN*10 + last_digit;
    n = n/10; 
    }
    return revN;
}

int main() {
    int n; 
    cin >> n;
    cout << reverse_a_number(n); 
    return 0; 
}