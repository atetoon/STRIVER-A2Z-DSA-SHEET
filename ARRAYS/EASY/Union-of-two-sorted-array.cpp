#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int> &arr1, vector<int> &arr2, int n1, int n2) {
    set<int> st;

    for(int i = 0; i<n1; i++)
        st.insert(arr1[i]);

    for(int i = 0; i<n2; i++) 
        st.insert(arr2[i]);

    vector<int> uni(st.size());

    int i = 0;
    for(auto it: st)
        uni[i++]= it;

    return uni;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> myArr1(n1);
    vector<int> myArr2(n2);
    for(int i = 0; i<n1; i++) cin >> myArr1[i];
    for(int i = 0; i<n2; i++) cin >> myArr2[i];
    vector<int> v = unionArray(myArr1, myArr2, n1, n2);
    for(int i = 0;i<v.size(); i++) cout << v[i] << " ";
}