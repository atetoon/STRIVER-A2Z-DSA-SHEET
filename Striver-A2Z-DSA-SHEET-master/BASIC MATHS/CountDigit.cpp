#include<bits/stdc++.h>
using namespace std; 

// Time complexcity = log10(n)
int countDigit(int n) {
    int cnt = 0;
    while(n != 0) {
        n = n/10;
        cnt++; 
    }
    return cnt;
}

int countDigitUsingLog(int n) {
    int cnt = (int) log10(n)+1; 
    return cnt; 
}
int main() {
    int n; 
    cin >> n;
    cout << countDigit(n) << endl;
    cout << countDigitUsingLog(n); 
    return 0; 
}