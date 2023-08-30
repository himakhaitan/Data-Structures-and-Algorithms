
#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>&arr) {
    
    int size = arr.size();

    for (int i = 0; i < size - 1; i++) {

        int min = INT_MAX;
        int index = 0;
        for (int j = i; j < size; j++) {
            if (min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

int main() {
    
    vector <int> arr = { 4, 2, 8, 1, 7, 0, 6, 3, 5};
    
    selectionSort(arr);
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<" ";
    }
    
    cout << endl;
    return 0;
}