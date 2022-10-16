#include <iostream>
#include <vector>


const int MAX = 10000; //

int st[MAX];
int top = 0;


void init() {
	top = 0;
}
bool isEmpty() {
	return(top == 0);
}
bool isFull() {
	return(top == MAX);
}

void push(int x) {
	if (isFull()) {
	std::cout << "error : full" << std::endl;
		return;
	}
	st[top] = x;
	++top;
}
int pop() {
	if (isEmpty()) {
		std::cout << "error : empty" << std::endl;
		return -1;
	}
	--top;
	return st[top];
}

int main() {
	init();
	
	push(3);
	push(5);
	std::cout << pop() << "\n"<< "wer"<<std::endl;
	
	push(7);

	std::cout << pop() << std::endl;

}