#include <iostream>
#include <vector>

using namespace std;

// Function to sort individual buckets using Insertion Sort
void insertionSort(vector<float>& bucket) {
    for (int i = 1; i < bucket.size(); ++i) {
        float key = bucket[i];
        int j = i - 1;
        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    // 1. Create n empty buckets
    vector<float> buckets[n];

    // 2. Put elements into different buckets
    // Formula: index = n * array_value
    for (int i = 0; i < n; i++) {
        int index = n * arr[i];
        buckets[index].push_back(arr[i]);
    }

    // 3. Sort each bucket using Insertion Sort
    for (int i = 0; i < n; i++) {
        if (!buckets[i].empty()) {
            insertionSort(buckets[i]);
        }
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
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}