// Fig. 19.10.31
// Example : Employee

#ifndef EMPLOYEE_H
#def EMPLOYEE_H
 
class Employee
{
	char *firstName; 
	char *lastName;
	static int count;
	
	public:
		Employee(const char * const,const char * const); // constructor
		~Employee(); //destructor
		const char *getFirstName() const; // return first name
		const char *getLastName() const; // return last name
		
		//static member function
		static int getCount(); // return number of object instantiated
		
}; //end class Employee

#endif
