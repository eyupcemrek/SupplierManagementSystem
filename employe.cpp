#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "employe.h"
#include <vector>
#include <cstdlib>   
#include <ctime>     
   
istream& operator>>(istream& input, Employe employe){
	ofstream Empplo;
    Empplo.open("Empplo.txt", ios::app);

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

    Empplo<<endl<<name<<setw(10)<<surname<<setw(10)<<department<<setw(15)<<idNo;
    
    return input;
}



void Employe :: Empp(){

    ofstream Empplo;
    Empplo.open("Empplo.txt", ios::app);

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


    Empplo<<endl<<name<<setw(10)<<surname<<setw(10)<<department<<setw(15)<<idNo;
}

void Employe :: deleteEmpp(){
	ifstream Open("Empplo.txt");
    ofstream Temp("Tempp.txt");
	
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

    remove("Empplo.txt");
    rename("Tempp.txt", "Empplo.txt");
}


void Employe ::printRandomEmploye() {
    ifstream Empplo("Empplo.txt");

    if (!Empplo.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }

    vector<string> employes;
    string line;

    while (getline(Empplo, line)) {
        employes.push_back(line);
    }

    Empplo.close();

    if (employes.empty()) {
        cout << "No employees found." << endl;
        return;
    }
    
    int randomIndex = rand() % employes.size();
	srand((time(NULL)));

    cout << "Selected employee:" << endl;
    cout << employes[randomIndex] << endl;

}





