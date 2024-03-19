#pragma once
struct Node {
	char data; 
	Node* next;
	Node(char dat) {
		this->data = dat;
		this->next = nullptr;
	}
	Node() {
		this->data = 0;
		this->next = nullptr;
	}
};
class stack {
	int n;
	Node* head = new Node;
public:
	stack();
	stack(char* arr, int n);
	void add(char el);
	void remove();
	bool is_symmetric(stack st);
	void print();
	char show();
	~stack();
};
std::string read_s(std::string s);
void reverse(char* arr, int size);
