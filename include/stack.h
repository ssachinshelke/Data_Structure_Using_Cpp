#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class stack {
private:
	int size;
	int *data;
	int top;

bool is_stack_empty();
bool is_stack_full();

public:
stack(int input_size) { 
	size = input_size;
	top = 0;
	this->data = (int *) malloc(sizeof(int)*size);
}
~stack() {
	free(this->data);
}

bool push(int num);
int pop();
void print_stack();
};