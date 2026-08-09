#include <bits/stdc++.h>
using namespace std;

int consecOnes(vector<int> &a, int n) {
    int cnt=0;
    int ans = 0;

    for(int i = 0; i<n; i++) {
        if(a[i] == 1) { 
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }
    return ans; 
}

int main() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    cout << consecOnes(v, n);
    return 0;
}