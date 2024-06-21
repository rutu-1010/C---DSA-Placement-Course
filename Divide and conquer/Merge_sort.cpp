#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei) {
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}

void mergesort(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }
    int mid = (si + ei) / 2;
    mergesort(arr, si, mid);
    mergesort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

int main() {
    int arr[] = {1, 2, 8, 9, 5, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
