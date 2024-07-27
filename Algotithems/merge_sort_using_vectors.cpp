#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[middle + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right) {
   if (left < right) {
      int middle = (left + right) / 2;

      merge_sort(arr, left, middle);
      merge_sort(arr, middle + 1, right);

      merge(arr, left, middle, right);
   }
}

int main() {
    int arr[10] = {4, 2, 8, 3, 7, 1, 10, 9, 5, 6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr, 0, arr_size - 1);

    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
