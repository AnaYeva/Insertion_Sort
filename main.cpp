#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int length)
{
    int temp, j;
    for (int i = 1; i < length; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {8, 4, 1,999, 56, 3, -44, 23, -6, 28, 0,100};

    insertionSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int i: arr) {
        cout << i << " ";
    }

    return 0;
}