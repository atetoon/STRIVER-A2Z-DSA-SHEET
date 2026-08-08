#include<bits/stdc++.h>
#include <vector>
using namespace std;

//brute force
vector<int> intersectionArray(vector<int> &a, vector<int> &b, int n1, int n2) {
    vector<int> ans;
    vector<int> vis(n2, 0);
    for(int i = 0; i<n1; i++) {
        for(int j = 0; j<n2; j++) {
            if(a[i] == b[j] && vis[j] == 0) {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }

            if(b[j] > a[i]) break;
        }
    }
    return ans;
}

//optimal
vector<int> intersectionArray1(vector<int> &a, vector<int> &b, int n1, int n2) {
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i<n1 && j<n2) {
        if(a[i] < b[j]) {
            i++;
        }
        else if(b[j] < a[i]) {
            j++;
        }
        else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> myArr1(n1);
    vector<int> myArr2(n2);
    for(int i = 0; i<n1; i++) cin >> myArr1[i];
    for(int i = 0; i<n2; i++) cin >> myArr2[i];
    vector<int> v = intersectionArray1(myArr1, myArr2, n1, n2);
    for(int i = 0;i<v.size(); i++) cout << v[i] << " ";
}