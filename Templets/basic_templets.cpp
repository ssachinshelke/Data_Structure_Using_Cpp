/*
Templets is very useful tool in C++ which is generally use to 
implement same functionality for different data types. 

For ex: If we want to implement sort functionality for various
data types, then we can defined templete method. This avoids
defining multiple methods of same functionality with different
data types(This is function overloading). 

How templets works?
Templets worked similar to MACROS. Templets get resolved at
compiled time. At the start we may way templetes but after 
compilation we may see multiple class/functions in compiled 
code. 

Notes:
1. Templets can be implemented for functions/methods. 
	ex: templet <typename T> 
	    T myMin(T x, T y) {
		return x < y ? x : y;
	    }
2. Generics in C++: This means writing method which can 
   be used for different data types. With this same 
   algorithms can be implemented for various data types.
   Generics in C++/ Generic programming can be acheived 
   by using Templets. Refer: https://www.geeksforgeeks.org/generics-in-c/
3. Class templetes: Like functional templets, class templetes
   can be used where that class implements functionality 
   useful for different data types.
   Class templetes can be used for functionalities like:
   linked list, trees, stack, queues, array etc 
4. There can be more than one arguments in templets. 
   ex: templete <typename T, typename U>
       void myfunc(T x , U y);
*/
<<<<<<< HEAD

#include <iostream>

using namespace std;

template <typename T>
class Array {
	T * ptr;
	int size;
public:
	Array(T arr[], int s);
	void print_arra();
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

int main() {
	int arr[5] = {1,2,3,4,5};
	Array<int> ary(arr,5);

	cout << "Templets Basic"<<endl;
	
	ary.print_arra();
	return 0;
}
=======
>>>>>>> 7a5a4f4e7288fc38db214e5da832a9276fa1f0e5
