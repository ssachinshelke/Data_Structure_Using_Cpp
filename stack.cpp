/*
	This file for stack functions
bool is_stack_empty(stack *s);
bool is_stack_full(stack *s);
stack * stack_init(int size);
void stack_deinit(stack *s);
bool push(stack *s, int num);
int pop(stack *s);
void print_stack(stack *s);
*/


#include "include/stack.h"

using namespace std;

bool stack::is_stack_empty() {
	if (this->top == 0)
		return true;
	return false;
}

bool stack::is_stack_full() {
	if (this->top == this->size)
		return true;
	return false;
}


bool stack::push(int num) {
	if(this->is_stack_full()) {
		printf("STACK is FULL ...\n");
		return false;
	}
	this->data[this->top] = num;
	this->top++;
	return true;
}

int stack::pop() {
	if(this->is_stack_empty()) {
		printf("STACK is Empty ...\n");
		return false;
	}
	this->top--;
	return this->data[this->top];
}
void stack::print_stack() {
	printf("Stack:");
	for(int i = 0; i < this->top; i++) {
		printf(" %d", this->data[i]);
	}
	printf("\n");
}

int main()
{
	stack s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.print_stack();
	cout<<"POP:"<<s.pop()<<endl;
	cout<<"POP"<<s.pop()<<endl;
	s.print_stack();
	return 0;
}

