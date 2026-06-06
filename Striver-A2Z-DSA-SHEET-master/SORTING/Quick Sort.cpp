#include <bits/stdc++.h>
using namespace std;

int partition(int MyArray[], int low, int high) {
    int pivot = MyArray[low];
    int i = low;
    int j = high;
    while(i < j) {

    while(MyArray[i] <= pivot && i <= high-1) {
        i++; 
    }
    while(MyArray[j] > pivot && j >= low) {
        j--; 
    } 
    if(i<j) {
        swap(MyArray[i], MyArray[j]);
    }

    } 
    swap(MyArray[low], MyArray[j]); 
    return j; 
} 

void quickSort(int MyArray[], int low, int high) {
    if(low < high) {
        int j = partition(MyArray, low, high);

        quickSort(MyArray, low, j-1);
        quickSort(MyArray, j+1, high); 
    }
}

int main(){
    
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    } 

    quickSort(arr, 0, n-1);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
