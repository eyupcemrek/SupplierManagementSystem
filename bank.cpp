#include<iostream>
#include<string>
#include "bank.h"



	int Bank::totalMoney = 1000;

	
	
	double Bank::lemonPrice=1;
	double Bank::tobaccoPrice=2;
	double Bank::rosePrice=3;
	double Bank::alcoholPrice=1.5;
		
	double Bank::lemonColognePrice=10;
	double Bank::tobaccoColognePrice=20;
	double Bank::roseColognePrice=30.5;
	
	
	void Bank::setlemonPrice(double amount){
		totalMoney = totalMoney - (lemonPrice*amount*3);
	}
	void Bank::settobaccoPrice(double amount){
		totalMoney = totalMoney - (tobaccoPrice*amount*3);
	}
	void Bank::setrosePrice(double amount){
		totalMoney = totalMoney - (rosePrice*amount*3);
	}
	void Bank::setalcoholPrice(double amount){
		totalMoney = totalMoney - (alcoholPrice*amount*2);
	}
	

	void Bank::setlemonPrice(int amount){
		totalMoney = totalMoney - (lemonPrice*amount*3);
	}
	void Bank::settobaccoPrice(int amount){
		totalMoney = totalMoney - (tobaccoPrice*amount*3);
	}
	void Bank::setrosePrice(int amount){
		totalMoney = totalMoney - (rosePrice*amount*3);
	}
	void Bank::setalcoholPrice(int amount){
		totalMoney = totalMoney - (alcoholPrice*amount*2);
	}
		
	void Bank::setlemonColognePrice(int amount){
		totalMoney += (amount * lemonColognePrice);
	}
	void Bank::settobaccoColognePrice(int amount){
		totalMoney += (amount * tobaccoColognePrice);
	}
	void Bank::setroseColognePrice(int amount){
		totalMoney += (amount * roseColognePrice);
	}
		
	int Bank::gettotalMoney(){
		return totalMoney;
	}
		
			
	
	
	void Bank::tottalMoney(){
		totalMoney += 50 * (lemonPrice + tobaccoPrice + rosePrice + alcoholPrice);
	}
	
	
	
	void Bank::decreaseLemonPrice(int amount){
		totalMoney -= (amount * lemonPrice);
	}
	void Bank::decreaseTobaccoPrice(int amount){
		totalMoney -= (amount * tobaccoPrice);
	}
	void Bank::decreaseRosePrice(int amount){
		totalMoney -= (amount * rosePrice);
	}
	void Bank::decreaseAlcoholPrice(int amount){
		totalMoney -= (amount * alcoholPrice);
	}


	
	
		
			
			






