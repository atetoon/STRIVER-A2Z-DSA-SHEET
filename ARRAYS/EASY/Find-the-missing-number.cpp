#include <bits/stdc++.h>
using namespace std;

//brute force
int missingNum(vector<int> &a, int n) {
    n = n+1;
    for(int i = 1; i<=n; i++) {
        bool found = false;
        for(int j = 0; j<n-1; j++) {
            if(a[j] == i) {
                found = true;
                break;
            }
        }

        if(!found) return i;
    }
    return -1;
}

//better
int missingNum1(vector<int> &a, int n) {
    n = n + 1;

    vector<int> hash(n+1, 0);
    for(int i = 0; i<n-1; i++) {
        hash[a[i]]++;
    }

    for(int i = 1; i<=n; i++) {
        if(hash[i] == 0) return i;
    }

    return -1;
}

//optimal
int missingNum2(vector<int> &a, int n) {
    n = n + 1;
    int sum = 0;
    for(int i = 0; i<n-1; i++) {
        sum+=a[i];
    }

    long long expSum = (n *1LL* (n+1))/2;

    return expSum - sum;
}

//optimal 
int missingNum3(vector<int> &a, int n) {
    int xor1 = 0, xor2 = 0;

    for(int i = 0; i<n; i++) {
        xor2^=a[i];
        xor1^=i+1;
    }
    xor1^=n+1;

    return xor1^xor2;
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    cout << missingNum3(v, n);
    return 0;
}