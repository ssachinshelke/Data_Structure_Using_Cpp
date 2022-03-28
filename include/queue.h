#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class queue {
private:
	int size;
	int *data;
	int front;
	int rear;

bool is_queue_empty();
bool is_queue_full();
public:
queue(int input_size) {
	this->size = input_size;
	this->front = -1;
	this->rear = -1;
	this->data = (int *)malloc(sizeof(int)*input_size);
}
~queue(){
free(this->data);
}
bool enque(int num);
int dequeue();
void print_queue();
};