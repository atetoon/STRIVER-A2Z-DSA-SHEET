#include<bits/stdc++.h> 
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0;i<n;i++) {
        int mini = i;
        for(int j=i+1;j<n;j++) {
            if(arr[mini] > arr[j]) mini = j;
        }
        swap(arr[mini], arr[i]);
    }
}

void bubble_sort(int arr[], int n) {
    for(int i = n-1;i>0;i--) {
        for(int j=0;j<i;j++) {
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

void insertion_sort(int arr[], int n) {
    for(int i = 1; i<n;i++) {
        int j = i;
        while(j>0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        } 
    }
}

void merge(vector<int> &v, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high) {
        if(v[left] <= v[right]) {
            temp.push_back(v[left]);
            left++;
        } else {
            temp.push_back(v[right]);
            right++;
        }
    }

    while(left<=mid) {
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(v[right]);
        right++;
    }
    for(int i = low; i<=high;i++) {
        v[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &v, int low, int high) {
    if(low >= high) return;
    int mid = (low+high)/2;
    merge_sort(v, low, mid);
    merge_sort(v, mid+1, high);
    merge(v, low, mid, high);       
}

int partition(vector<int> &tA, int low, int high) {
    int pivot = tA[low];
    int i = low;
    int j = high;
    while(i<j) {
        while(tA[i] <= pivot && i <= high-1) {
            i++;
        }
        while(tA[j] > pivot && j >= low+1) {
            j--;
        }

        if(i<j) {
            swap(tA[i], tA[j]);
        }
    }
    swap(tA[low], tA[j]);
    return j;
}

void quick_sort(vector<int> &tA, int low, int high) {
    if(low<high) {
        int j = partition(tA, low, high);

        quick_sort(tA, low, j-1);
        quick_sort(tA, j+1, high);
    }
}


int main() {
    int n; cin>>n;
    vector <int> v(n);

    for(int i = 0;i<n;i++) cin>>v[i];
    quick_sort(v, 0, n-1);

    for(int i = 0;i<n;i++) cout<<v[i] << " ";
    cout << endl;
}
