#include <cstdlib>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

/* This project has been created by Moon Moore, Brayden Lloyd, Matt Kernan, and Hailey McLaughin
Date: 10/18/17
The purpose of this assignment is to create POS program that enables a trained employee to take pizza orders,
as well as keep track of profit and the amount of all denominations of money in the register.
*Add copyright etc.*
*/

class Pizza
{
	private:
		int sizeSmall;
		int sizeMed;
		int sizeLar;
		double costSmall;
		double costMed;
		double costLar;
		double toppingSmallMed;
		double toppingLarge;
	public:
		double totalCost;
		void setSize(int);
		int getSize();
		void setCost();
		double getCost();
		void setTopping();
		int getTopping();
		Pizza(int, int);
};

class Register
{
	private:
		double nickle;
		double dime;
		double quarter;
		double dollar;
		double five;
		double ten;
		double payment;
		double profit;
	public:
		void setProfit();
		double getProfit();
		void setCost(int, int);
		double getCost();
		void setPayment();
		void printEverything();
		Register();
};

int main()
{
	bool started = false;
	char userInput = 'X';
	int userInput1 = 0;

	Register r;

	while (userInput != 'Y')
	{
		cout << "Would you like to open up this register? (Y/N)\n";
		cin >> userInput;
		if (userInput == 'Y')
		{
			started = true;
			cout << "Press 1 to enter customer payment: " << endl;
			cout << "Press 2 to print the amount of profit so far: " << endl;
			cout << "Press 3 to print profit and # of all denominations: " << endl;
			cout << "Press 4 to close the register (close shop): " << endl;
			cout << "Press 5 to display this screen again: " << endl;
		}
		else if (userInput == 'N')
		{
			started = false;
		}
	}
	while (started != false)
	{
		cin >> userInput1;
		switch (userInput1)
		{
		case 1:
			r.setPayment();
			break;
		case 2:
			r.setProfit();
			r.getProfit();
			break;
		case 3:
			r.printEverything();
			break;
		case 4:
			started = false;
			break;
		case 5:
			cout << "Press 1 to enter customer payment: " << endl;
			cout << "Press 2 to print the amount of profit so far: " << endl;
			cout << "Press 3 to print profit and # of all denominations: " << endl;
			cout << "Press 4 to close the register (close shop): " << endl;
			cout << "Press 5 to display this screen again: " << endl;
			break;
		default:
			cout << "Not a Valid Choice.\n" << "Choose again.\n";
			break;
		}
	}

	return 0;
}

Register::Register()
{
	nickle = 40.0;
	dime = 50.0;
	quarter = 40.0;
	dollar = 10.0;
	five = 10.0;
	ten = 0.0;
	payment = 0.00;
	profit = 0.00;
}

void Register::setProfit()
{
	double defaultMoney = 77.00;
	double afterMoney = ((nickle * 0.05) + (dime * 0.10) + (quarter * 0.25) + (dollar * 1.00) + (five * 5.00) + (ten * 10.00) + defaultMoney);
	profit = afterMoney - defaultMoney;
}

double Register::getProfit()
{
	cout << "Profit is: " << profit << endl;
	return profit;
}

void Register::setCost(int, int)
{

}

double Register::getCost()
{
	return 0;
}

void Register::setPayment()
{
	char userChar;
	cout << "Is the customer paying enough? Y for Yes, N for No." << endl;
	cin >> userChar;
	if (userChar != 'Y' || userChar != 'N')
	{
		if (userChar == 'Y')
		{
			cout << "How much are they paying? (Enter usering this format \"X.XX\" " << endl;
			cin >> payment;

			int userInput;
			cout << "How many nickles? " << endl;
			cin >> userInput;
			this->nickle = userInput;

			cout << "How many dimes? " << endl;
			cin >> userInput;
			this->dime = userInput;

			cout << "How many quarters? " << endl;
			cin >> userInput;
			this->quarter = userInput;

			cout << "How many dollars? " << endl;
			cin >> userInput;
			this->dollar = userInput;

			cout << "How many fives? " << endl;
			cin >> userInput;
			this->quarter = userInput;

			cout << "How many tens? " << endl;
			cin >> userInput;
			this->quarter = userInput;
		}
		else if (userChar == 'N')
		{
			cout << "The customer needs to pay more.\n";
			cout << "Enter 1 to try to set payment again.\n";
		}
	}
}

void Register::printEverything()
{
	cout << "Profit: " << profit << endl << "Customer Payment: " << payment << endl << "Nickles: " << nickle << endl;
	cout << "Dimes: " << dime << endl << "Quarters: " << quarter << endl << "Dollars: " << dollar << endl << "Fives: " << five << endl;
	cout << "Tens: " << ten << endl;
}

void Pizza::setSize(int)
{

}

int Pizza::getSize()
{
	return 0;
}

void Pizza::setCost()
{

}

double Pizza::getCost()
{
	return 0;
}

void Pizza::setTopping()
{

}

int Pizza::getTopping()
{
	return 0;
}

Pizza::Pizza(int, int)
{

}
