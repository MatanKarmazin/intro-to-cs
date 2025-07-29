int funLast(int *arr, int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (key < arr[mid]) {
            high = mid - 1;
        } else if (key > arr[mid]) {
            low = mid + 1;
        } else if (low == high || arr[mid + 1] > key) {
            return mid;
        } else {
            low = mid - 1;
        }
    }
    return -1;
    
}