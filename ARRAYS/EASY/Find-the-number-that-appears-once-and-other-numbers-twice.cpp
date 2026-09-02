#include<bits/stdc++.h>
using namespace std;

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
 
int main() {
    int n; cin >> n;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) {
        cin >> myArr[i];
    }
    cout << numOnce(n, myArr) << endl;
    return 0;
}