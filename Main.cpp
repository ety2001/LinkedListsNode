// Main.cpp
// Test program for creating a linked list with 10 students and their graduation years
// Prints student list in reverse order

#include "Node.h"
#include "Student.h"
#include <iostream>

using namespace std;

// list of students
char* students[] = {
	"a",
	"b",
	"c",
	"d",
	"e",
	"f",
	"g",
	"h",
	"i",
	"j"
};

int main(){
	Node* studentList = NULL;
	// creates list of students with name and graduation year
	for(int i=0; i<10; i++){
		Student* student = new Student(students[i],i);
		Node* studentNode = new Node(student);
		studentNode->setNext(studentList);
		studentList = studentNode;
	}
	// prints out the list in reverse order
	Node* currStudent;
	for(currStudent = studentList; currStudent != NULL; currStudent = currStudent->getNext()){
		Student* stud = currStudent->getStudent();
		cout << stud->getName() << ": " << stud->getGradYear() << endl;
	};
	return 0;
}
