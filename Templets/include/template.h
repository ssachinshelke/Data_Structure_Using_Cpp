using namespace std;
template <typename T>
class Array {
	T * ptr;
	int size;
public:
	Array(T arr[], int s);
	void print_arra();
         ~Array() {
		cout << "Destructor of Array called"<<endl;
		delete [] this->ptr;
		this->size = 0;
	}
	T * getPtr() {
		return this->ptr;
	}

	int getSize() {
		return this->size;
	}

	void bubble_sort();
	void bubble_sort_with_recursion(T *arr, int n);
	void merge_sort(T *arr, int l, int r);
	void selection_sort(T *arr, int n);
	void insertion_sort(T *arr, int n);
	void shell_sort(T *arr, int n);
};

template <typename T>
Array<T>::Array(T arr[], int size) {
	cout << "Constructor of Array called"<<endl;
	this->ptr = new T[size];
	for(int i = 0; i < size; i++)
		this->ptr[i] = *(arr + i);
	this->size = size;
}


template <typename T>
void Array<T>::print_arra() {
	for(int i = 0; i < this->size; i++)
		cout << this->ptr[i] <<" ";
	cout << endl;
}
