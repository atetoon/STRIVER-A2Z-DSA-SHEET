#include<bits/stdc++.h>
using namespace std; 

bool isArmstrong(int n) {
    int temp = n;
    int sum = 0; 
     int digits = log10(n)+1;
    while(n>0) {
        int last_digit = n % 10;
        sum = sum + pow(last_digit, digits);
        n = n / 10;
    }
    return temp == sum; 
} 
int main() {
    int n; 
    cin >> n;
    cout << isArmstrong(n); 
    return 0; 
}