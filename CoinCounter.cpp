#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Stephanie Thompson
//CS231
//Coin Counter- will take user input on number of coins and compute totals
//Due January 30, 2020
int main(int argc, char** argv) 
{ //welcome message
	cout << "Welcome to the Coint Counter! You will be prompted to enter a variety of coins that will be tallied at the end." << endl;

//Take user input for coins
int pennies;
int nickels;
int dimes;
int quarters;
int h_dollars; 
int one_dollars;

do {
	cout << "\nPlease enter a positive number of Pennies: " ;
	cin >> pennies ;
	{
	if (pennies < 0) 
	cout << "You must not follow instructions well. You can't have a negative number of Pennies, silly!";
    }
}
	while (pennies < 0);

do {
	cout << "\nPlease enter a positive number of Nickels: " ;
	cin >> nickels ;
	{ if (nickels < 0)
	cout << " You must not follow instructions well. You can't have a negative number of coins, silly!" ;
	}
}
	while (nickels < 0);

do {
	cout << "\nPlease enter a positive number of Dimes: " ;
	cin >> dimes ;
	{
	if ( dimes < 0) 
	cout << "You must not follow instructions well. You can't have a negative number of coins, silly!" ;
	}
}
	while (dimes < 0) ;


do {
	cout << "\nPlease enter a positive number of Quarters: " ;
	cin >> quarters ;
	{if ( quarters < 0) 
	cout << "You must not follow instructions well. You can't have a negative number of coins, silly!" ;
	}
}
	while (quarters < 0) ;

do {
	cout << "\nPlease enter a positive number of Half Dollars: ";
	cin >> h_dollars ;
	{
	if (h_dollars < 0) 
	cout << "You must not follow instructions well. You can't have a negative number of coins, silly!" ;
	}
}
	while (h_dollars < 0) ; 

do {
	cout << "\nPlease enter a positive number of One Dollar Coins: " ;
	cin >> one_dollars ;
	{if (one_dollars < 0)
	cout << "You must not follow instructions well. You can't have a negative number of coins, silly!" ;
	}
}
	while (one_dollars <0);
	
//Calculate total 
float tot_coins = (0.01 * pennies) + (0.05 * nickels) + (0.10 * dimes) + (0.25 * quarters) + (0.50 * h_dollars) + (1.00 * one_dollars);
cout << "\nYou have " << pennies << " pennies, " << nickels << " nickels, " << dimes << " dimes, " << quarters << " quarters, " << h_dollars << " half dollars, and " <<one_dollars<< " one dollars coins." << endl;
cout << fixed << showpoint;
cout << setprecision(2);
cout << "You have a total amount of: $" << tot_coins ;


	
	
}
