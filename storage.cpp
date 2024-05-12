#include <iostream>
#include <string>
#include "storage.h"
#include "mainfunctions.h"
#include "bank.h"
#include "employee.h"
#include "employe.h"
#include "alghoritm.h"
using namespace std;


int Storage::lemon = 40;
int Storage::alcohol = 50;
int Storage::tobacco = 60;
int Storage::rose = 10;





Storage::Storage(int _alcohol,int _lemon,int _tobacco,int _rose){  
	
	setAlcohol(_alcohol);
	setLemon(_lemon);
	setTobacco(_tobacco);
	setRose(_rose);	
	
}

Storage::~Storage(){  
	
}


void Storage::setAlcohol(int _alcohol){
	alcohol = _alcohol;
}
void Storage::setLemon(int _lemon){
	lemon = _lemon; 
}
void Storage::setTobacco(int _tobacco){
	tobacco = _tobacco;
}
void Storage::setRose(int _rose){
	rose = _rose;
}
		
void Storage::setLemonCologneProduct(int amount){
	Alghoritm A;
	if(lemon>= amount*3 && alcohol >= amount*2){
		
		lemonCologne += amount;
		
		lemon = lemon - (amount*3);
		alcohol = alcohol - (amount*2);
		setlemonColognePrice(amount);
		cout<<"Your order has been received"<<endl;	
    	if (amount >= 0 && amount <= 5) {
        	e.printRandomEmployee();
    	} 
		else  {
			int i;
        for ( i = 0; i < 2; ++i) {
            e.printRandomEmployee();
        }
    	}
		cout<<"Total Money: "<<gettotalMoney()<<endl;
	}
	else{
		if(lemon<amount*3){
			cout<<"Lemon stocks are insufficient"<<endl; 
			
			/*int req= (amount*3) - lemon;
			Storage::deliveryLemon(req);*/			
		}
		if(alcohol<amount*2){
			cout<<"Alcohol stocks are insufficient"<<endl;
		}
	}
}
void Storage::setTobaccoCologneProduct(int amount){
	if(tobacco>= amount*3 && alcohol >= amount*2){
		
		tobaccoCologne += amount;
		
		tobacco = tobacco - (amount*3);
		alcohol = alcohol - (amount*2);
		settobaccoColognePrice(amount);
		cout<<"Your order has been received"<<endl;
		
		if (amount >= 0 && amount <= 5) {
        	e.printRandomEmployee();
    	} 
		else  {
			int i;
        for ( i = 0; i < 2; ++i) {
            e.printRandomEmployee();
        }
    	}
		cout<<"Total Money: "<<gettotalMoney()<<endl;
	}
	else{
		if(tobacco<amount*3){
			cout<<"Tobacco stocks are insufficient"<<endl; 
		}
		if(alcohol<amount*2){
			cout<<"Alcohol stocks are insufficient"<<endl;
		}
	}
}
void Storage::setRoseCologneProduct(int amount){
	if(rose>= amount*3 && alcohol >= amount*2){
		
		roseCologne += amount;
		
		rose = rose - (amount*3);
		alcohol = alcohol - (amount*2);
		setroseColognePrice(amount);
		cout<<"Your order has been received"<<endl;
		if (amount >= 0 && amount <= 5) {
        	e.printRandomEmployee();
    	} 
		else  {
			int i;
        for ( i = 0; i < 2; ++i) {
            e.printRandomEmployee();
        }
    	}
		cout<<"Total Money: "<<gettotalMoney()<<endl;
	}
	else{
		if(rose<amount*3){
			cout<<"Rose stocks are insufficient"<<endl;
		}
		if(alcohol<amount*2){
			cout<<"Alcohol stocks are insufficient"<<endl;
		}
	}
}

void Storage::deliveryLemon(int amount){
	lemon += amount;	
}
void Storage::deliveryAlcohol(int amount){
	alcohol += amount;
		
}
void Storage::deliveryTobacco(int amount){
	tobacco += amount;
		
}
void Storage::deliveryRose(int amount){
	rose += amount;
		
}

int Storage::getLemon(){
	return lemon;
}
int Storage::getTobacco(){
	return tobacco;
}
int Storage::getRose(){
	return rose;
}
int Storage::getAlcohol(){
	return alcohol;
}



void Storage::deliveryOrder(){
	MainFunctions m;
	cout << " What do you want to add?"<<endl;
	cout << " 1- Lemon "<<endl;
	cout << " 2- Tobacco "<<endl;
	cout << " 3- Rose "<<endl;
	cout << " 4- Alcohol "<<endl;
	int n;
	cin>>n;
	switch (n){
		int amount;
		case 1 :
			cout<<"How many stock you want to add?: ";
			cin>>amount;
			deliveryLemon(amount);
			cout<<"New lemon stocks: "<<getLemon()<<endl;
			B.decreaseLemonPrice(amount);
			cout<<"Total money: "<< B.gettotalMoney()<<endl;			
			m.show();
			break;
		case 2 :
			cout<<"How many stock you want to add?: ";
			cin>>amount;
			deliveryTobacco(amount);
			cout<<"New tobacco stocks: "<<getTobacco()<<endl;
			B.decreaseTobaccoPrice(amount);
			cout<<"Total money: "<< B.gettotalMoney()<<endl;
			m.show();
			break;
		case 3 :
			cout<<"How many stock you want to add?: ";
			cin>>amount;
			deliveryRose(amount);
			cout<<"New rose stocks: "<<getRose()<<endl;
			B.decreaseRosePrice(amount);
			cout<<"Total money: "<< B.gettotalMoney()<<endl;
			m.show();
			break;
		case 4 :
			cout<<"How many stock you want to add?: ";
			cin>>amount;
			deliveryAlcohol(amount);
			cout<<"New alcohol stocks: "<<getAlcohol()<<endl;
			B.decreaseAlcoholPrice(amount);
			cout<<"Total money: "<< B.gettotalMoney()<<endl;
			m.show();
			break;	
	}
}


void Storage::truckk(){
	lemon += 50;
	tobacco += 50;
	rose += 50;
	alcohol += 50;
}


void Storage::truck(){
	Alghoritm A;
	MainFunctions m;
	string y;
	cout<<"Do you want to take a truck on the road?(yes/no)"<<endl;
	cin>> y;
	
	if(y == "yes"){
			int startCity = 0; 

    		vector<int> shortestPath = A.nearestNeighbor(startCity);

			string cityNames[] = {"Istanbul", "Adiyaman", "Balikesir", "Isparta", "Antalya"};

    		cout<<"shortest route: ";
    		for (int i = 0; i < shortestPath.size(); ++i) {
    			cout << cityNames[shortestPath[i]];
    			if (i < shortestPath.size() - 1) {
        		cout << " -> ";
    			}		
			}

    	cout << "\nTotal Distance: " << A.calculateTotalDistance(shortestPath) << endl;
    	E.printRandomEmploye();
		}
	else{
		m.show();
	}	
	truckk();
	cout<<"New stocks:"<<endl<<"Lemon:"<<getLemon()<<endl<<"Tobacco:"<<getTobacco()<<endl<<"Rose:"<<getRose()<<endl<<"Alcohol:"<<getAlcohol()<<endl;
	B.tottalMoney();
	cout<<"Total money: "<<B.totalMoney<<endl;
	
}

void display(Storage s,int n){

        switch(n){

            case 1:
                cout<<"Lemon: " << s.getLemon()<<endl;
                break;
            case 2:
                cout<<"Tobacco: "<<s.getTobacco()<<endl;
                break;
            case 3:
                cout<<"Rose: "<<s.getRose()<<endl;
                break;
            case 4:
                cout<<"Alcohol: "<<s.getAlcohol()<<endl;
                break;
    	}


}
        void display(Storage& s){
            cout<<"Lemon: "<<s.getLemon()<<endl;
            cout<<"Tobacco: "<<s.getTobacco()<<endl;
            cout<<"Rose: "<<s.getRose()<<endl;
            cout<<"Alcohol: "<<s.getAlcohol()<<endl;

        }



