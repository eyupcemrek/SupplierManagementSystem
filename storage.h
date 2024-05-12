#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>
#include <string>
#include "mainfunctions.h"
#include "bank.h"
#include "employee.h"
#include "employe.h"
#include "alghoritm.h"
using namespace std;

class Storage:public Bank{
    public:
    	Storage(int _alcohol=50,int _lemon=40,int _tobacco=60,int _rose=10);
    	~Storage();
        void setAlcohol(int alcohol);
        void setLemon(int lemon);
        void setTobacco(int tobacco);
        void setRose(int rose);

        void setLemonCologneProduct(int amount);
        void setTobaccoCologneProduct(int amount);
        void setRoseCologneProduct(int amount);

        void deliveryLemon(int amount);
        void deliveryTobacco(int amount);
        void deliveryRose(int amount);
        void deliveryAlcohol(int amount);

        
        
		static int alcohol;
        static int lemon;
        static int tobacco;
        static int rose;
        
        void deliveryOrder();
        int getLemon();
		int getTobacco();
		int getRose();
		int getAlcohol();
		
		Employee e;
		Employe E;
		
		void truck();
		void truckk();
		
		
		
    	friend void display(Storage s,int n);
    	friend void display(Storage& s);
		
    private:
        int lemonCologne;
        int tobaccoCologne;
        int roseCologne;
		
		Bank B;
		
		
};

#endif
