#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <string>
using namespace std;

class Bank{
	public:
		void setlemonPrice(int amount);
		void settobaccoPrice(int amount);
		void setrosePrice(int amount);
		void setalcoholPrice(int amount);
		
		void setlemonPrice(double amount);
		void settobaccoPrice(double amount);
		void setrosePrice(double amount);
		void setalcoholPrice(double amount);
		
		void setlemonColognePrice(int amount);
		void settobaccoColognePrice(int amount);
		void setroseColognePrice(int amount);
		
		static int totalMoney;		
		
		int gettotalMoney();
		
		
	
		void decreaseLemonPrice(int amount);
		void decreaseTobaccoPrice(int amount);	
		void decreaseRosePrice(int amount);
		void decreaseAlcoholPrice(int amount);
	
		void tottalMoney();
		
		
	protected:
		static double lemonPrice;
		static double tobaccoPrice;
		static double rosePrice;
		static double alcoholPrice;
		
		static double lemonColognePrice;
		static double tobaccoColognePrice;
		static double roseColognePrice;
		
		
			
};
























#endif
