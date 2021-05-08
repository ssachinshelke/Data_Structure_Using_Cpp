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

#include <iostream>
#include "include/template.h"
#include "include/sort.h"

using namespace std;



int main() {
	int arr[6] = {8,2,7,4,5,6};
	Array<int> ary(arr,6);

	cout << "Templets Array"<<endl;

	cout << "Unsorted Array"<<endl;
	ary.print_arra();

        ary.bubble_sort_with_recursion(ary.getPtr(), ary.getSize());	
	cout << "Sorted Array"<<endl;
	ary.print_arra();
	return 0;
}
