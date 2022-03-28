#include "include/queue.h"
 
bool queue::is_queue_empty() {
	if (this->front == -1)
		return true;
	return false;
}

bool queue::is_queue_full() {
	if (((this->front == 0) && (this->rear == this->size - 1)) ||
		((this->rear + 1) == this->front))
		return true;
	return false;
}


bool queue::enque(int num) {
	if(this->is_queue_full()) {
		printf("\nQUEUE is FULL ...\n");
		return false;
	}
	if (this->front == -1)
		this->front = 0;
	this->rear = (this->rear + 1) % this->size;
	this->data[this->rear] = num;
	
	return true;
}

int queue::dequeue() {
	int element;
	if(this->is_queue_empty()) {
		printf("\nQUEUE is Empty ...\n");
		return -1;
	}
	element = this->data[this->front];
	if(this->front == this->rear) {
		this->front = -1;
		this->rear = -1;
	} else {
		this->front = (this->front + 1)%this->size;
	}

	return element;
}

void queue::print_queue() {
	int i = 0;
	if(this->is_queue_empty()) {
		printf("Empty\n");
		return;
	}

	for(i = this->front; i != this->rear; i = (i+1)%this->size) {
		printf("%d ", this->data[i]);
	}
	printf("%d ", this->data[this->rear]);
	printf("\n");
}


int main() {
	queue q(5);
	q.print_queue();
	
	q.enque(1);
	q.enque(2);
	q.enque(3);
	q.enque(4);
	q.enque(5);
	q.enque(1);
	q.print_queue();
	
	q.dequeue();
	q.dequeue();
	q.enque(10);
	q.enque(9);
	q.print_queue();
	
	printf("\n");
	return 0;
}