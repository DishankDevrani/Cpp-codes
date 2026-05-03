#include <iostream>
#include <vector>
#include <algorithm>  // for sort()
using namespace std;

void bucketSort(float arr[], int n) {
    // 1. Create n empty buckets
    vector<float> buckets[n];

    // 2. Put elements into different buckets
    for (int i = 0; i < n; i++) {
        int index = n * arr[i];  // find bucket index
        buckets[index].push_back(arr[i]);
    }

    // 3. Sort each bucket
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // 4. Combine all buckets into original array
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (float value : buckets[i]) {
            arr[k++] = value;
        }
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}