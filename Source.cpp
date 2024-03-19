#include <fstream>
#include <string>
#include <cctype>
#include"Header.h"
#include <iostream>
stack::stack() {
	n = 0;
	head->next = nullptr;
}
stack::stack(char* arr, int n) {
	for (int i = 0; i < n; i++) {
		add(arr[i]);
	}
}
char stack::show() {
	char elem = '0';
	if (n != 0) elem = head->data;
	return elem;
}
void stack::add(char el) {
	Node* newDat = new Node(el);
	newDat->next = head->next;
	head->next = newDat;
	head->data = newDat->data;

	this->n++;
}
bool stack::is_symmetric(stack st) {
	bool t = false;
	int k=0;
	while (head->next != nullptr) {
		if (show() == st.show()) {
			k+= 1;
		}
		remove();
		st.remove();
		
	}
	//std::cout << k<<std::endl;
	if (k == n) t = true;
	return t;
}
	void stack::remove() {
		
		if(head == nullptr) {
			return;
		}
		Node* temp = head;

		if (head->next == nullptr) {
			head = nullptr;
			
		}
		
		
		else {
			head = head->next;
			
		}

		delete temp;

	}
	
	
	stack::~stack() {
		
	}
std::string read_s(std::string s) {
    std::string str;
	char* chars = new char[s.length()];
	s.copy(chars, s.length());
    for(int i=0;i<s.length();i++){
        if (std::isspace(chars[i]) || std::ispunct(chars[i])) {
            continue;
        }
        str += tolower(chars[i]);
    }
    return str;
}

void reverse(char* arr, int size) {
	for (int i = 0, high = size - 1; i < high; i++, high--) {
		std::swap(arr[i],arr[high]);
	}
}
void stack::print() {
	Node* el = head->next;
	while (el->next != nullptr) {
		std::cout << el->data<<" ";
		el = el->next;
	}
	std::cout << std::endl;
}