// Student.cpp
// Implementation for Student class

#include "Student.h"
#include "string.h"

Student::Student(char* name, int year){
	strcpy(fullName,name);
	gradYear = year;
};

char* Student::getName(){
	return fullName;
};

int Student::getGradYear(){
	return gradYear;
};
