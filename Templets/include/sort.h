
/*
	Generic bubble sort for all type of datatypes.
	Bubble sort implemented using templates.
	Worst case and Avarege time complexity: O(n*n)
	Best case time complexity: O(n)
	Space complexity: O(1)
*/
template <typename T>
void Array<T>::bubble_sort() {
	int i, j;
	T temp;

	bool swapped = false;
	for(i = 0; i < this->size - 1; i++) {
		swapped = false;
		for(j = 0; j < this->size - i - 1; j++) {
			if(this->ptr[j] > this->ptr[j+1]) {
				temp = this->ptr[j];
				this->ptr[j] = this->ptr[j+1];
				this->ptr[j+1] = temp;
				swapped = true;
			}
		}
		if(swapped == false) {
			break;       /* This is optimized bubble sort 
					as we stopped when we see array sorted */
		}
	}
}

template <typename T>
void Array<T>::bubble_sort_with_recursion(T *arr, int n) {
	int i;
	T temp;

	if(n == 1) {
		std::cout << "Array Sorted using recursive bubble sort" << std::endl;
		return; 
	}

	for(i = 0; i < n - 1; i++) {
		if(arr[i] > arr[i+1]) {
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}

	bubble_sort_with_recursion(this->ptr, n-1);
}

/*
	Merge two sub arrays. 
	First array: arr[l to m]
	Second array: arr[m+1 to r]
*/
template <typename T> void merge(T *arr, int l, int m, int r) {
	int n1 =  m - l + 1;
	int n2 =  r - m;
	int tmp1[n1], tmp2[n2];

	for (int i = 0; i < n1; i++) {
		tmp1[i] = arr[l + i];
	}

	for (int i = 0; i < n2; i++) {
		tmp2[i] = arr[m + 1 + i];
	}
	
	// Merge two array back to arr. 
	int i = 0, j = 0, k = l; // Intitialized k to l

	/*Compare and put small element in array*/
	while(i < n1  && j < n2) {
		if(tmp1[i] <= tmp2[j]) {
			arr[k] = tmp1[i];
			i++;
		} else {
			arr[k] = tmp2[j];
			j++;
		}
		k++;
	}
	/*Copy remaining element from tmp1 */
	while(i < n1) {
		arr[k] = tmp1[i];
		i++;
		k++;
	}
	/* Copy remaining element from tmp2 */
	while(j < n2) {
		arr[k] = tmp2[j];
		j++;
		k++;
	}
} 

template <typename T>
void Array<T>::merge_sort(T *arr, int l, int r) {

	if(l >= r) {
		return;			// Break condition for recusrsion. There will always be one for recursion
	}

	int m = (l + (r-1)) / 2;	// Find middle element of array

	merge_sort(arr, l, m);		// Recursively pass first half
	merge_sort(arr, m+1, r);	// Recursively pass second half
	merge(arr, l, m, r);		// Merge element to form sorted array
}

template <typename T>
void Array<T>::selection_sort(T * arr, int n) {
	int min_idx;
	for (int i = 0; i < n -1; i++) {
		min_idx = i;
		for(int j = i + 1; j < n; j++) {
			if(arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		T tmp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = tmp;
	}
}


template <typename T>
void Array<T>::insertion_sort(T * arr, int n) {
	int i, j;
	T key;
	
	for(i = 1; i < n; i++) {
	
		key = arr[i];
		j = i - 1;

		while(j >= 0 && arr[j] > key) {
			arr[j +1] =  arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}
