#include<bits/stdc++.h>
using namespace std;

//brute
void moveZeros(vector<int> &arr, int n) {
    vector<int> temp;
    for(int i = 0; i<n; i++) {
        if(arr[i]!= 0) {
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i<temp.size(); i++) {
        arr[i] = temp[i];
    }
    for(int i = temp.size(); i<n; i++) {
        arr[i] = 0;
    }
}

//optimal 
void moveZeros1(vector<int> &arr, int n) {
    int j = -1;
    for(int i = 0; i<n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    for(int i = j+1; i<n; i++) {
        if(arr[i]!=0) {
            swap(arr[j], arr[i]);
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) cin >> myArr[i];
    moveZeros(myArr, n);
    for(int i = 0; i<n; i++) cout << myArr[i] << " ";
}