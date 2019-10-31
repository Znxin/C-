// Fig. 19.10.31
// Member-function definitions foe class Employee

#include<iostream>
using std::cout;
using std::endl;

#include<cstring> // strlen and strcpy prototypes
using std::strlen;
using std::strcpy;

#include"Employee.h" // Employee calss definition

//define and initialise static data member at file scope
int Employee::count = 0;

int Employee::getCount()
{
	return count;
}

Employee::Employee(const char * const first,const char * const list)
{
	firstName =  new char[strlen(first) + 1 ];
	strcpy(firstName,first);
	
	lastName = new char[strlen(last) + 1];
	strcpy(lastName,last);
	
	count++; //increment static count of employee
	
	cout << "Employee constructor for" << firstName
	<< ' ' << lastName << "called." << endl;
}//end Employee constructor

//destructor deallocates dynamically allocated memory
Employee::~Employee()
{
	cout<<"~Employee() called for"<<firstName
	<< " " << lastName << endl;
	
	delete [] firstName; // release momory
	delete [] lastName; // release memory
} // end ~Employee constructor


int main()
{
	
}

