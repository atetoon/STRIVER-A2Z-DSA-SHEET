#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int n, int x) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, num;
    cin >> n >> num;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) cin >> myArr[i];
    cout << linearSearch(myArr, n, num);
}