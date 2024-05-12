#include<iostream>
#include<string>
#include "mainfunctions.h"
#include "storage.h"
#include "employee.h"
#include "employe.h"

using namespace std;




	void MainFunctions::hello(){
	
		cout <<"            SUPPLIER MANAGEMENT SYSTEM  " <<endl;
		login();

	}

	void MainFunctions::login(){
		
		int password; 
		
		cout <<	" Enter your password:"<<endl;
		cin>>password;
		
		
		if(password == 1234 )
		{
			show();	
		}
		else
		{
			cout << "1-Try again"<<endl;
			cout << "2-Exit"<<endl;
			int n;
			cin>>n;
			switch (n)
			{
				
				case 1 :
					login();
					break;
					
				case 2 :
					hello();
					break;	
			}
			
		}
	}
	
	void MainFunctions::show(){
		cout << "What do you want to do?"<<endl;
		cout << "1- Produce"<<endl;
		cout << "2- Stocks"<<endl;
		cout << "3- Employees"<<endl;
		cout << "4- Exit"<<endl;
		
		
		int n;
			cin>>n;
			switch (n)
			{
				
				case 1 :
					admin();
					break;
					
				case 2 :
					stock();
					break;
				case 3 :
					empl();	
					break;
				case 4 :
					cout<<"see you";
					break;	
						
			}
	}
	
	
	void MainFunctions::admin(){
		cout << " What do you want to produce?"<<endl;
		cout << " 1- Lemon Cologne"<<endl;
		cout << " 2- Tobacco Cologne"<<endl;
		cout << " 3- Rose Cologne"<<endl;
		cout << " 4- Exit"<<endl;
		cout << " 5- Back to menu"<<endl;
		int n;
			cin>>n;
			switch (n)
			{
				int amount;
				case 1 :
					cout << "How many do you want to produce?"; 
					cin >> amount;
					sStorage.setLemonCologneProduct(amount);
					display(sStorage, n);
					admin();
					break;
				case 2 :
					cout << "How many do you want to produce?";
					cin >> amount;
					sStorage.setTobaccoCologneProduct(amount);
					display(sStorage, n);
					admin();
					break;
				case 3 :
					cout << "How many do you want to produce?";
					cin >> amount;
					sStorage.setRoseCologneProduct(amount);
					display(sStorage, n);
					admin();
					break;	
				case 4 :
					cout << " See you";
					break;
				case 5 :
					show();
					break;		
			}
		
	}
	
	void MainFunctions::stock(){
		
		display(sStorage);
		string x;
		cout<<"Do you want to add stock(yes/no)"<<endl;
		cin>> x;
		
		
		if(x == "yes"){
			cout << " Stock adding options"<<endl;
			cout << " 1- Adding manually"<<endl;
			cout << " 2- Putting truck on the road"<<endl;
			cout << " 3- Exit"<<endl;
			cout << " 4- Back to main menu"<<endl;	
			int e;
			cin>>e;
			switch (e){
				case 1 :
					sStorage.deliveryOrder();
					break;
				case 2 :
					sStorage.truck();
					break;
				case 3 :
					cout << " See you";
					break;
				case 4 :
					show();
					break;		
			}
		}
		else{
			show();
		}

	}
	
	void MainFunctions::empl(){
		cout << " Edit employees"<<endl;
		cout << " 1- Add factory worker"<<endl;
		cout << " 2- Delete factory worker"<<endl;
		cout << " 3- Add drivers"<<endl;
		cout << " 4- Delete drivers"<<endl;
		cout << " 5- Exit"<<endl;
		cout << " 6- Back to menu"<<endl;
		
		int n;
			cin>>n;
			switch (n)
			{
				case 1 :
					cin>>e;
					show();
					break;
				case 2 :
					e.deleteEmp();
					show();
					break;
				case 3 :
					cin>>E;
					show();
					break;
				case 4 :
					E.deleteEmpp();
					show();
					break;
				case 5 :
					cout << " See you";
					break;	
				case 6 :
					show();
					break;	
			}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
		
	
