#include<bits/stdc++.h>
using namespace std;

void largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i<n; i++) {
        if(arr[i] > largest) largest = arr[i];
    }
    cout << largest;
}

int main() {
    int n;
    cin >> n;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) cin >> myArr[i];
    largestElement(myArr, n);
}