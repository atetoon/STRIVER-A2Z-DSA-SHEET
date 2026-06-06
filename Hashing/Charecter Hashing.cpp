#include<bits/stdc++.h>
using namespace std; 

int main() { 
    string s;
    cin >> s;

    //pre-computation
    int hash[26] = {0};
    for(int i = 0;i<s.size();i++) {
        hash[s[i] - 'a']++; 
    }

    int q;
    cin >> q;
    while(q--) {
        char c; 
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl;
    }

   /* //pre-computation
    int hash[256] = {0};
    for(int i = 0;i<s.size();i++) {
        hash[s[i]]++;                             // storing charecters at index of their ASCII.
    }

    int q;
    cin >> q;
    while(q--) {
        char c; 
        cin >> c;
        //fetch
        cout << hash[c] << endl;
    } */

    return 0;  
}