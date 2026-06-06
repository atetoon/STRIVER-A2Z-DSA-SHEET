#include<bits/stdc++.h>
using namespace std; 

void selection_sort(int n, int arr[]) {
     for(int i = 0;i<=n-2;i++) {
        int mini = i;
        for(int j = i;j<=n-1;j++) {
            if(arr[j] < arr[mini]) {
                mini = j; 
            }
        }
        swap(arr[mini], arr[i]);
    }
     for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubble_sort(int n, int arr[]) {
     for(int i = n-1;i>0;i--) {
        int didswap = 0;
        for(int j = 0;j<i;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didswap++; 
            }
        }
        if(didswap == 0) {break;}
        cout << "runs\n";
    }
     for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubble_sort2(int n, int arr[]) {
     for(int i = 0;i<n-1;i++) {
        int didswap = 0;
        for(int j = 0;j<n-1-i;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didswap++; 
            }
        }
        if(didswap == 0) {break;}
        cout << "runs\n";
    }
     for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertion_sort(int n, int arr[]) {
     for(int i = 0;i<=n-1;i++) {
        int j = i;
        while(j>0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--; 
        }
    }
     for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() { 
    
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }

    selection_sort(n, arr);
    bubble_sort(n, arr);
    bubble_sort2(n, arr);  
    return 0;  
}