#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>


using namespace std;

class Employee
{
    public:
    	
    void Emp();
	void deleteEmp();
	void printRandomEmployee();
	friend istream& operator>>(istream& input, Employee employee);
    
	private:
 



};
#endif
