#include<bits/stdc++.h>
using namespace std; 

int main() { 
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int maxi = 0; 
    int mini = n; 

    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
        if(it.second > maxi) {
            maxi = it.second;
        }
        if(it.second < mini) {
            mini = it.second;
        }
    }
    
    cout << mini << " " << maxi << endl; 
    
    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    } 
    return 0;  
}