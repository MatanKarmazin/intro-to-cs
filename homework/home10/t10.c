int search10(int a[], int n, int x) {
	//looked for the first index that had x using binary search,looked for the last index that had x and then subtructed the last with the first +1 
	int left = 0, right = n - 1;
	int firstIndex = -1;
	int lastIndex = -1;

	// Binary search for the first occurrence of x

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (a[mid] == x) {
			firstIndex = mid;
			right = mid - 1; // Continue searching on the left side
		}
		else if (a[mid] < x) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	// Binary search for the last occurrence of x
	left = 0;
	right = n - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (a[mid] == x) {
			lastIndex = mid;
			left = mid + 1; // Continue searching on the right side
		}
		else if (a[mid] < x) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	// Calculate the count of occurrences
	if (firstIndex != -1 && lastIndex != -1) {
		return lastIndex - firstIndex + 1;
	}
	else {
		return 0; // x not found in the array
	}
}