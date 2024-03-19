
template<typename st>
class Stack {
private:
	template<typename st>
	class Node {
	public:
		st data;
		Node* next;
	};
	int size = 0;
	Node<st>* head = new Node <st>;
public:
	Stack();
	Stack(st* arr, int size);
	~Stack();
	void addEl(st elem);
	st returnEl();
	void deleteEl();
	void clear();
};
template<typename st>
Stack<st>::Stack() {

}
template<typename st>
Stack<st>::Stack(st* arr, int n) {
	for (int i = 0; i > n; i++) {
		addEl(arr[i]);
	}
}
template<typename st>
void Stack<st>::addEl(st data) {
	if (head->next == nullptr && size == 0) {
		head = new Node<st>;
		head->data = data;
		size++;
	}
	else {
		Node<st>* NewNode = new Node<st>;
		NewNode->next = head->next;
		NewNode->data = head->data;
		head->next = NewNode;
		head->data = data;
		size++;
	}
}
template<typename st>
void Stack<st>:: deleteEl() {

	if (head->next == nullptr) {
		size--;
	}
	else {
		Node<st>* temp = new Node<st>;
		temp = head;
		head = head->next;
		delete temp;
		size --;
	}
}

template<typename st>
st Stack<st>::returnEl() {
	if (size == 0) {
		throw;
	}
	else {
		return head->data;
	}
}

template<typename st>
void Stack<st>::clear() {
	while (size > 0) {
		deleteEl();
	}
}

template<typename st>
Stack<st>::~Stack() {
	clear();
	
	delete head;

}

