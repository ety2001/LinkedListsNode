// Student.h
// Student class that holds a name and a graduation year

class Student{
	private:
		char fullName[100];
		int gradYear;
	public:
		Student(char*,int);
		char* getName();
		int getGradYear();
};
