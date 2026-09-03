#include<bits/stdc++.h>
using namespace std;

//brute force
int numOnce(int n, vector<int> &arr) {
    for(int i = 0; i<n; i++) {
        int num = arr[i];
        int cnt = 0;
        for(int j = 0; j<n; j++) {
            if(num == arr[j]) cnt++;
        }
        if(cnt == 1) return num;
    }

    return -1;
}

//better
int numOnce1(int n, vector<int> &arr) {
    int mx = arr[0];            //find maxi element
    for(int i=0; i<n; i++) mx = max(mx, arr[i]);

    vector<int> hashh(mx, 0);       //hash array
    for(int i=0; i<n; i++) hashh[arr[i]]++; // frequency
    
    for(int i=0; i<n; i++) {
        if(hashh[arr[i]] == 1) return arr[i];
    }

    return -1;
}

//better 2 
int numOnce2(int n, vector<int> &arr) {
    map<long long,int> mpp;

    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it : mpp) {
        if(it.second == 1) return it.first;
    }
    return -1;
}

//optimal 
int numOnce3(int n, vector<int> &arr) {
    int xorr = 0;
    for(int i=0; i<arr.size(); i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
 
int main() {
    int n; cin >> n;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) {
        cin >> myArr[i];
    }
    cout << numOnce3(n, myArr) << endl;
    return 0;
}