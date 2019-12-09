// atm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//declare variables
	double balance,	deposit, withdraw;
	int option;

	balance = 500; //default amount

	do
	{
		cout <<"\n\t*************MENU****************";
		cout <<"\n\t*                               *";
		cout <<"\n\t*        1. Check Balance       *";
		cout <<"\n\t*        2. Deposit             *";
		cout <<"\n\t*        3. Withdraw            *";
		cout <<"\n\t*        4. Transfer            *";
		cout <<"\n\t*        5. Exit                *";
		cout <<"\n\t*                               *";
		cout << "\n\t*********************************";
		cout << "\n\t  Please choose an option: ";
		cin>> option;

		switch (option){
		
		case 1: cout << "\n\tYour Balance is: $"<<balance <<endl;
			     break;

		case 2: cout << "\n\tAmount you want to deposit: $";
			    cin>>deposit;
				balance += deposit;
				cout<<"\n\t Current Balance: $" << balance <<endl;
				break;

		case 3: cout << "\n\tHow much do you want to withdraw?: $";
			cin>> withdraw;

			if(balance < withdraw)
				cout << "\n\tYou do not have enough money in your account to withdraw"<<endl;
			else
				balance -= withdraw;

			cout<<"\n\t Current Balance: $" << balance <<endl;
			 break;

		default: if(option != 5)
					 cout<< "\n\tInvalid option. Please try again" <<endl;;
			break;
		}

	} while (option != 5);


	system("pause");
	return 0;
}

