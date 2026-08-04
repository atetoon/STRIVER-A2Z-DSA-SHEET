#include<bits/stdc++.h> 
using namespace std;

void selection_sort(int n, int arr[]) {
        for(int i = 0;i<n-1;i++) {
            int mini = i;
            for(int j = i+1;j<n;j++) {
                if(arr[mini]>arr[j]) mini = j;
            }
            swap(arr[mini], arr[i]);
        }
}

void bubble_sort(int arr[], int n) {
    for(int i = n-1;i>0;i--) {
        for(int j = 0;j<i;j++) {
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

void insertion_sort(int arr[], int n) {
    for(int i = 0; i<n;i++) {
        int j = i;
        while(j>0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main() {
    int n; cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++) cin>>arr[i];
    insertion_sort(arr, n);

    for(int i = 0;i<n;i++) cout<<arr[i] << " ";
}
