#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using v = vector<ll>;

void consOnes(ll n, v &a) {
    ll cnt = 0, mx = 0;
    for(ll i = 0; i<n; i++) {
        if(a[i] == 1) {
            cnt++;
            mx = max(mx, cnt);
        } else cnt = 0;
    }
    cout << mx << endl;
}
 
int main() {
    ll n; cin >> n;
    v a(n);

    for(ll i = 0; i<n; i++) {
        cin >> a[i];
    }
    consOnes(n, a);
    return 0;
}