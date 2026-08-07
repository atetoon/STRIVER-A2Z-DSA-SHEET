#include<bits/stdc++.h>
using namespace std;

//brute
void rotateArray1(vector<int> &arr, int n, int d) {
    d = d%n;
    int temp[d];
    for(int i = 0; i<d; i++) {
        temp[i] = arr[i];
    }

    for(int i = d; i<n; i++) {
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i<n; i++) {
        arr[i] = temp[i-(n-d)];
    }
}

//optimal 
void rotateArray2(vector<int> &arr, int n, int d) {
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.begin()+n);
    reverse(arr.begin(), arr.begin()+n);
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) cin >> myArr[i];
    rotateArray2(myArr, n, d);
    for(int i = 0; i<n; i++) cout << myArr[i] << " ";
}