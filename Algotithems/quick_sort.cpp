#include <iostream>

using namespace std;

int arr[10] = {4,2,8,3,7,1,10,9,5,6};

void quick_sort(int arr[], int left, int right) {
    if(left >= right) return;
    int i = left, j = right;
    int pivot = arr[left];
    while(i<j){
        while(arr[j] >= pivot && i < j) j--;
        while(arr[i] <= pivot && i < j) i++;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;        
    }
    arr[left] = arr[i];
    arr[i] = pivot;
    quick_sort(arr, left, i-1);
    quick_sort(arr, i+1, right);
}

void print_arr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    quick_sort(arr, 0, 9);
    print_arr(arr, 10);
    return 0;
}