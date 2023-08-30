
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector <int> &arr) {
    
    int size = arr.size();
    bool isSwapped = false;
    
    for (int i = 0; i < size - 1; i++) {
        isSwapped = false;
        for (int j = i+ 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[j], arr[i]);
                isSwapped = true;
            }
        }
        
        if (!isSwapped) {
            break;
        }
    }
    
    
    return;
}

int main() {
    
    vector <int> arr = { 4, 2, 8, 1, 7, 0, 6, 3, 5};
    
    bubbleSort(arr);
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<" ";
    }
    
    cout << endl;
    return 0;
}