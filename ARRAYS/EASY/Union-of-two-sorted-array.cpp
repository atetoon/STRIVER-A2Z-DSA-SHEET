#include<bits/stdc++.h>
#include <vector>
using namespace std;

//brute force
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

//optimal
vector<int> uni2(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2) {
        if(a[i] <= b[j]) {
            if(unionArr.size() == 0 || unionArr.back()!= a[i]) {
                unionArr.push_back((a[i]));
            }
            i++;
        } else {
            if(unionArr.size() == 0 || unionArr.back()!= b[j]) {
                unionArr.push_back((b[j]));
            }
            j++;
        }
    }

    while(j<n2) {
        if(unionArr.size() == 0 || unionArr.back()!= b[j]) {
            unionArr.push_back((b[j]));
        }
        j++;
    }

    while(i<n1) {
        if(unionArr.size() == 0 || unionArr.back()!= a[i]) {
            unionArr.push_back((a[i]));
        }
        i++;
    }

    return unionArr;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> myArr1(n1);
    vector<int> myArr2(n2);
    for(int i = 0; i<n1; i++) cin >> myArr1[i];
    for(int i = 0; i<n2; i++) cin >> myArr2[i];
    vector<int> v = uni2(myArr1, myArr2);
    for(int i = 0;i<v.size(); i++) cout << v[i] << " ";
}