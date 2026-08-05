#include<bits/stdc++.h>
using namespace std;

void isSorted(vector<int> &arr, int n) {

    for(int i = 0; i<=n-2; i++) {
        if(arr[i] > arr[i+1]) {
            cout << false;
            return;
        } 
    }
    cout << true;
}

int main() {
    int n;
    cin >> n;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) cin >> myArr[i];
    isSorted(myArr, n);
}