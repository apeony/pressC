#include <iostream>
#include <deque>

using namespace std;
const int MAX = 10000; //

int qu[MAX];
int tail = 0, head = 0;


void init() {
	head = tail = 0;
}
bool isEmpty() {
	return(head= tail);
}
bool isFull() {
	return(head==(tail+1)%MAX);
}
void enqueue(int x) {
	if (isFull()) {
		cout << "full" << endl;
		return;
	}
	qu[tail] = x;
	++tail;
	if(tail==MAX) tail = 0;
}
int dequeue() {
	if (isEmpty()) {
		cout << "empty" << endl;
		return -1;
	}
	int res = qu[head];
	++head;
	if (head == MAX) head = 0;
	return res;
}

int main() {
	init();
	
	enqueue(5);
	cout << dequeue() << endl;
	enqueue(4);
	enqueue(9);
	cout << dequeue() << endl;
	enqueue(6);

	cout << dequeue() << endl;

}