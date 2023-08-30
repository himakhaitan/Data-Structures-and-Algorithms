
#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector <int> &arr) {
    int size = arr.size();
    
    for (int i = 1; i < size; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            } else {
                break;
            }
        }
    }
}

int main() {
    
    vector <int> arr = { 4, 2, 8, 1, 7, 0, 6, 3, 5};
    
    insertionSort(arr);
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<" ";
    }
    
    cout << endl;
    return 0;
}