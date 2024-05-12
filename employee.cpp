#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "employee.h"
#include <vector>
#include <cstdlib>   
#include <ctime>     
   
istream& operator>>(istream& input, Employee employee){
	ofstream Emplo;
    Emplo.open("Emplo.txt", ios::app);

    string name;
    cout<< "new employee name:";
    input>> name;

    string surname;
    cout<<"new employee surname:";
    input>> surname;

    string department;
    cout<<"department:";
    input>> department;

    string idNo;
    cout<<"id number:";
    input>> idNo;

    Emplo<<endl<<name<<setw(10)<<surname<<setw(10)<<department<<setw(15)<<idNo;
    
    return input;
}



void Employee :: Emp(){

    ofstream Emplo;
    Emplo.open("Emplo.txt", ios::app);

    string name;
    cout<< "new employee name:";
    cin>> name;

    string surname;
    cout<<"new employee surname:";
    cin>> surname;

    string department;
    cout<<"department:";
    cin>> department;

    string idNo;
    cout<<"id number:";
    cin>> idNo;


    Emplo<<endl<<name<<setw(10)<<surname<<setw(10)<<department<<setw(15)<<idNo;
}



void Employee :: deleteEmp(){
	ifstream Open("Emplo.txt");
    ofstream Temp("Temp.txt");
	
	string idToDelete;
	
    string name, surname, department, idNo;
	
	cout<<"enter id:";
    cin>>idToDelete;
	
    while (!(Open.eof())) {
    	Open>>name>>surname>>department>>idNo;
    	
	
    	
        if (idToDelete == idNo) {
            cout << "Deleted: " << name << " " << surname << " (ID: " << idNo << ")" << endl;
        } else {
            Temp << endl << name << setw(10) << surname << setw(10) << department << setw(15) << idNo;
        }
    }

    Open.close();
    Temp.close();

    remove("Emplo.txt");
    rename("Temp.txt", "Emplo.txt");
}






void Employee ::printRandomEmployee() {
    ifstream Emplo("Emplo.txt");

    if (!Emplo.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }

    vector<string> employees;
    string line;


    while (getline(Emplo, line)) {
        employees.push_back(line);
    }

    Emplo.close();

    
    if (employees.empty()) {
        cout << "No employees found." << endl;
        return;
    }

    
    
    int randomIndex = rand() % employees.size();
	srand((time(NULL)));
    
    cout << "Selected employee:" << endl;
    cout << employees[randomIndex] << endl;

}















