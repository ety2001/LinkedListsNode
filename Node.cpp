// Node.cpp

#include "Node.h"
#include <iostream>

Node::Node(Student* student){
	this->student = student;
	this->next = NULL;
};

Node::~Node(){
};

Node* Node::getNext(){
	return next;
};

Student* Node::getStudent(){
	return student;
};

void Node::setNext(Node* node){
	this->next = node;
};
