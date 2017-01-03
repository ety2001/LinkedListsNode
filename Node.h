// Node.h

class Node{
	private:
		Node* next;
		Student* student;
	public:
		Node();
		Node(Student*);
		~Node();
		Node* getNext();
		Student* getStudent();
		void setNext(Node*);
};
