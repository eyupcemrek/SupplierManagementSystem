#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>
#include <string>

using namespace std;

class Employe
{
    public:
    
    void Empp();
	void deleteEmpp();
	void printRandomEmploye();
	friend istream& operator>>(istream& input, Employe employe);

    private:




};
#endif
