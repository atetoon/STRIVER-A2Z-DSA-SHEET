#include<bits/stdc++.h>
using namespace std;


//brute force
int removeDupli(vector<int> &arr, int n) {
    set<int> st;
    for(int i = 0; i<n; i++) {
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it: st) {
        arr[index] = it;
        index++;
    }
    return index;
}

//optimal
int removeDuplicate(vector<int> &arr, int n) {
    int i = 0;
    for(int j = 1; j<n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}


int main() {
    int n;
    cin >> n;
    vector<int> myArr(n);
    for(int i = 0; i<n; i++) cin >> myArr[i];
    int size = removeDuplicate(myArr, n);
    for(int i = 0; i<size; i++) cout << myArr[i] << " ";
}