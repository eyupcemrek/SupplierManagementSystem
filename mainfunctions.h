#ifndef MAINFUNCTIONS_H
#define MAINFUNCTIONS_H

#include <iostream>
#include<iomanip>
#include <string>
#include "storage.h"
#include "bank.h"
#include "employee.h"
#include "employe.h"

using namespace std;


class Storage;
class MainFunctions{

    public:
        void hello();
        void login();
        void admin(); 
        void show();
        void stock();
        void empl();
        void emppl();
        
        Storage sStorage;
        Employee e;
        Employe E;
        
    private:
    	

};

#endif
