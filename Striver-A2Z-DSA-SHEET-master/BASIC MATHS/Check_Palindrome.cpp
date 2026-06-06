#include<bits/stdc++.h>
using namespace std; 

bool isPalindrome(int n) {
    int temp = n; 
    int revN = 0;
    while(n>0) {
        int last_digit = n%10;
        revN = revN*10 + last_digit;
        n = n / 10;
    }
    return temp == revN; 
} 
int main() {
    int n; 
    cin >> n;
    cout << isPalindrome(n);
    
    return 0; 
}