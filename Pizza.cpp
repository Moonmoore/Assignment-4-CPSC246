#include <cstdlib>
#include <vector>
#include <cstring>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/* This project has been created by Moon Moore, Brayden Lloyd, Matt Kernan, and Hailey McLaughin
Date: 10/18/17 - 10/30/17
The purpose of this assignment is to create POS program that enables a trained employee to take pizza orders,
as well as keep track of profit and the amount of all denominations of money in the register.
Copyright @2017
*/

//Global variables for pizza
const double COSTSMALL = 6.95;
const double COSTMED = 7.95;
const double COSTLAR = 8.95;
double TOPPINGSMALLMED = 0.50;
double TOPPINGLARGE = 1.00;

class Pizza
{
private:
	vector<string> defaultToppings;
	vector<string> customerToppings;
	vector<Pizza> orderNumber;
	string size;
	double totalCost;
public:
	void setSize();
	string getSize();
	void setCost();
	double getCost();
	void setTopping();
	void getTopping();
	void printCustomerTopping();
	Pizza();
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
	double cost;
	double profit;
public:
	void setProfit();
	double getProfit();
	void setCost(double);
	double getCost();
	void setPayment();
	void printEverything();
	void close();
	Register();
};

int main()
{
	//Vector to hold current order
	vector<Pizza> orderNumber(5);
	//Variables needed for loops and inputs
	bool started = false;
	char userInput = 'x';
	int userInput1 = 0;
	char nextPizza = 'y';
	double totalCost = 0.00;
	
	//Declaring the needed variables to call the classes
	Register r;
	Pizza a, b, c, d, e;
	
	//First loop that asks the worker if they want to open the register and prints the options for the register
	while (userInput != 'y')
	{
		cout << "Would you like to open up this register? (y/n)\n";
		cin >> userInput;
		if (userInput == 'y')
		{
			started = true;
			cout << "Press 1 to make a new order: " << endl;
			cout << "Press 2 to enter customer payment: " << endl;
			cout << "Press 3 to print the amount of profit so far: " << endl;
			cout << "Press 4 to print profit and # of all denominations: " << endl;
			cout << "Press 5 to close the register (close shop): " << endl;
			cout << "Press 6 to display this screen again: " << endl;
		}
		else if (userInput == 'n')
		{
			started = false;
		}
	}
	
	//If the register is opened then the switch case loop starts
	while (started != false)
	{
		cin >> userInput1;
		switch (userInput1)
		{
		case 1:
			/*This ask the user for size of pizza and toppings. Then it will give cost of each pizza and total cost. Max of five pizzas*/
			//the next nested if statements will be the five possible pizzas
			a.setSize();
			a.setTopping();
			a.setCost();
			a.getCost();

			cout << "Do you want another pizza? (y/n)" << endl;
			cin >> nextPizza;
			cout << endl;

			if (nextPizza == 'y')
			{
				b.setSize();
				b.setTopping();
				b.setCost();
				b.getCost();
				cout << "Do you want another pizza? (y/n)" << endl;
				cin >> nextPizza;
				cout << endl;
				if (nextPizza == 'y')
				{
					c.setSize();
					c.setTopping();
					c.setCost();
					c.getCost();
					cout << "Do you want another pizza? (y/n)" << endl;
					cin >> nextPizza;
					cout << endl;
					if (nextPizza == 'y')
					{
						d.setSize();
						d.setTopping();
						d.setCost();
						d.getCost();
						cout << "Do you want another pizza? (y/n)" << endl;
						cin >> nextPizza;
						cout << endl;
						if (nextPizza == 'y')
						{
							e.setSize();
							e.setTopping();
							e.setCost();
							e.getCost();
						}
					}
				}
			}

			if (a.getCost() > 0) {
				cout << "Pizza 1" << endl << a.getSize() << ": " << endl;
				a.printCustomerTopping();
				cout << endl;
			}
			if (b.getCost() > 0) {
				cout << "Pizza 2" << endl << b.getSize() << ": " << endl;
				b.printCustomerTopping();
			}
			if (c.getCost() > 0) {
				cout << "Pizza 3" << endl << c.getSize() << ": " << endl;
				c.printCustomerTopping();
			}
			if (d.getCost() > 0) {
				cout << "Pizza 4" << endl << d.getSize() << ": " << endl;
				d.printCustomerTopping();
			}
			if (e.getCost() > 0) {
				cout << "Pizza 5" << endl << e.getSize() << ": " << endl;
				e.printCustomerTopping();
			}

			//Generates the total cost and then "passes" it to the register class
			totalCost += (a.getCost() + b.getCost() + c.getCost() + d.getCost() + e.getCost());
			r.setCost(totalCost);

			cout << "Total cost of pizzas: $" << totalCost << endl;
			cout << "Press 1 to make a new order: " << endl;
			cout << "Press 2 to enter customer payment: " << endl;
			cout << "Press 3 to print the amount of profit so far: " << endl;
			cout << "Press 4 to print profit and # of all denominations: " << endl;
			cout << "Press 5 to close the register (close shop): " << endl;
			cout << "Press 6 to display this screen again: " << endl;
			break;
		case 2:
			//Allows the worker to enter what the customer is paying and how much of each denomination
			r.setPayment();
			cout << "Press 1 to make a new order: " << endl;
			cout << "Press 2 to enter customer payment: " << endl;
			cout << "Press 3 to print the amount of profit so far: " << endl;
			cout << "Press 4 to print profit and # of all denominations: " << endl;
			cout << "Press 5 to close the register (close shop): " << endl;
			cout << "Press 6 to display this screen again: " << endl;
			break;
		case 3:
			//Calculates the amount of profit that the company has earned for the duration of being open for this register
			//Then prints out the profit
			r.setProfit();
			r.getProfit();
			cout << "Press 1 to make a new order: " << endl;
			cout << "Press 2 to enter customer payment: " << endl;
			cout << "Press 3 to print the amount of profit so far: " << endl;
			cout << "Press 4 to print profit and # of all denominations: " << endl;
			cout << "Press 5 to close the register (close shop): " << endl;
			cout << "Press 6 to display this screen again: " << endl;
			break;
		case 4:
			//Prints # of all denominations and profit
			r.printEverything();
			cout << "Press 1 to make a new order: " << endl;
			cout << "Press 2 to enter customer payment: " << endl;
			cout << "Press 3 to print the amount of profit so far: " << endl;
			cout << "Press 4 to print profit and # of all denominations: " << endl;
			cout << "Press 5 to close the register (close shop): " << endl;
			cout << "Press 6 to display this screen again: " << endl;
			break;
		case 5:
			//Closes the register, outputs everything to "Report.txt", and prints everything the the screen
			r.close();
			r.printEverything();
			started = false;
			break;
		case 6:
			//Simply prints the menu screen again
			cout << "Press 1 to make a new order: " << endl;
			cout << "Press 2 to enter customer payment: " << endl;
			cout << "Press 3 to print the amount of profit so far: " << endl;
			cout << "Press 4 to print profit and # of all denominations: " << endl;
			cout << "Press 5 to close the register (close shop): " << endl;
			cout << "Press 6 to display this screen again: " << endl;
			break;
		default:
			//Stops the worker from inputing anything other than 1-6
			cout << "Not a Valid Choice.\n" << "Choose again.\n";
			break;
		}
	}
	return 0;
}

Register::Register()
{
	//Initilizes the ragister to have this amount of money in it by default
	//Stores all denominations
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
	//Calculates the profit
	double defaultMoney = 77.00;
	double afterMoney = ((this->nickle * 0.05) + (this->dime * 0.10) + (this->quarter * 0.25) + (this->dollar * 1.00) + (this->five * 5.00) + (this->ten * 10.00));
	profit = afterMoney - defaultMoney;
}

double Register::getProfit()
{
	//Returns the profit
	cout << "Profit is: " << profit << endl;
	return profit;
}

void Register::setCost(double cost)
{
	
	this->cost = cost;
}

double Register::getCost()
{
	cout << "Cost of pizza(s): " << cost << endl;
	return cost;
}

void Register::setPayment()
{
	//Prompts the worker to see if the customer is paying enough money
	//If they are then they can input all #'s of denominations
	//Then loops through to calculate how much of each denomination to give as change
	double change = 0.00;
	char userChar;
	cout << "Is the customer paying enough? y for Yes, n for No." << endl;
	cin >> userChar;
	if (userChar != 'y' || userChar != 'n')
	{
		if (userChar == 'y')
		{
			cout << "How much are they paying? (Enter usering this format \"X.XX\" " << endl;
			cin >> payment;

			int userInput;
			cout << "How many nickles? " << endl;
			cin >> userInput;
			this->nickle = userInput + nickle;

			cout << "How many dimes? " << endl;
			cin >> userInput;
			this->dime = userInput + dime;

			cout << "How many quarters? " << endl;
			cin >> userInput;
			this->quarter = userInput + quarter;

			cout << "How many dollars? " << endl;
			cin >> userInput;
			this->dollar = userInput + dollar;

			cout << "How many fives? " << endl;
			cin >> userInput;
			this->five = userInput + five;

			cout << "How many tens? " << endl;
			cin >> userInput;
			this->ten = userInput + ten;

			change = payment - cost;
			cout << "Their change is: " << change << endl;
			cout << "Give them : \n";

			bool loop = true;
			if (loop == true)
			{
			int countTen, countFive, countDollar, countQuarter, countDime, countNickle;
			countTen = 0;
			countFive = 0;
			countDollar = 0;
			countQuarter = 0;
			countDime = 0;
			countNickle = 0;
			//Loop to look through all denominations for change
			while (change != 0.0 || change <= 0.0)
			{
				if (change >= 10.00 && ten != 0.0)
				{
					change = change - 10.0;
					this->ten = ten - 1.00;
					countTen = countTen + 1;
				}
				else if (change >= 5.0 && five != 0.0)
				{
					change = change - 5.0;
					this->five = five - 1.00;
					countFive = countFive + 1;
				}
				else if (change >= 1.0 && dollar != 0.0)
				{
					change = change - 1.0;
					this->dollar = dollar - 1.00;
					countDollar = countDollar + 1;
				}
				else if (change >= 0.25 && change <= 0.251 && quarter != 0.0)
				{
					change = change - 0.25;
					this->quarter = quarter - 1.00;
					countQuarter = countQuarter + 1;
				}
				else if (change >= 0.10 && change <= 0.11 && dime != 0.0)
				{
					change = change - 0.10;
					this->dime = dime - 1.00;
					countDime = countDime + 1;
				}
				else if (change >= 0.041 && change <= 0.06 && nickle != 0.0)
				{
					change = change - 0.05;
					this->nickle = nickle - 1.00;
					countNickle = countNickle + 1;
					cout << countTen << " Ten(s), " << countFive << " Five(s), " << countDollar << " One(s), " << countQuarter << " Quarter(s), " << countDime << " Dime(s), and " << countNickle << " Nickle(s).\n";
				}
				else if (change <= 0.04  && change <= 0.05 && change >= -0.001)
				{
					cout << countTen << " Ten(s), " << countFive << " Five(s), " << countDollar << " One(s), " << countQuarter << " Quarter(s), " << countDime << " Dime(s), and " << countNickle << " Nickle(s).\n";
					cout << "NO PENNIES!\n";
					break;
				}
			}
			}
		}
		else if (userChar == 'n')
		{
			cout << "The customer needs to pay more.\n";
			cout << "Their money has been returned to them.\n";
			cout << "Enter 1 to try to set payment again.\n";
		}
	}
}

void Register::printEverything()
{
	//Prints everything
	cout << "Profit: " << profit << endl << "Customer Payment: " << payment << endl << "Nickles: " << nickle << endl;
	cout << "Dimes: " << dime << endl << "Quarters: " << quarter << endl << "Dollars: " << dollar << endl << "Fives: " << five << endl;
	cout << "Tens: " << ten << endl;
}

void Register::close()
{
	//Prints everything to the file "Report.txt"
	ofstream report;
	report.open("Report.txt");
	if (report.is_open())
	{
		report << "Profit: " << profit << endl << "Customer Payment: " << payment << endl << "Nickles: " << nickle << endl
			<< "Dimes: " << dime << endl << "Quarters: " << quarter << endl << "Dollars: " << dollar << endl << "Fives: " << five << endl
			<< "Tens: " << ten << endl;
		report.close();
	}
}

void Pizza::setSize()
{
	//Asks the user what size they want to order
	int userInput;
	cout << "What size pizza?: " << endl << "1. Small" << endl << "2. Medium" << endl << "3. Large" << endl;
	cin >> userInput;
	switch (userInput) {
	case 1:
		size = "small";
		cout << "Small" << endl;
		break;
	case 2:
		size = "medium";
		cout << "Medium" << endl;
		break;
	case 3:
		size = "large";
		cout << "Large" << endl;
		break;
	default:
		break;
	}
}

string Pizza::getSize()
{
	//Returns the size of the pizza
	return size;
}

void Pizza::setCost() //based on size and number of toppings
{
	//Calculates the cost of the pizza depending on the size of the pizza and the toppings
	int numToppings = customerToppings.size();
	if (size == "small")
	{
		totalCost += COSTSMALL;

		if (numToppings>3)
		{
			totalCost += (3 * TOPPINGSMALLMED);
			totalCost += ((numToppings - 3)*(TOPPINGSMALLMED*.5));
		}
		else
			totalCost += numToppings*TOPPINGSMALLMED;
	}
	else if (size == "medium")
	{
		totalCost += COSTMED;
		if (numToppings>3)
		{
			totalCost += (3 * TOPPINGSMALLMED);
			totalCost += ((numToppings - 3)*(TOPPINGSMALLMED*.5));
		}
		else
			totalCost += numToppings*TOPPINGSMALLMED;
	}
	else if (size == "large")
	{
		totalCost += COSTLAR;

		if (numToppings>3)
		{
			totalCost += (3 * TOPPINGLARGE);
			totalCost += ((numToppings - 3)*(TOPPINGLARGE*.5));
		}
		else
			totalCost += numToppings*TOPPINGLARGE;
	}
	cout << totalCost << endl;
}

double Pizza::getCost()
{
	//Returns the cost of the pizza
	return totalCost;
}

void Pizza::setTopping()
{
	//Asks the user what toppings they want on their pizza
	char userInput;
	int userChoice;
	this->customerToppings.clear();
	cout << "Any toppings?: (y/n) " << endl;
	cin >> userInput;

	while (userInput == 'y') {
		for (int i = 0; i< 10; i++) {
			cout << i + 1 << ". " << defaultToppings.at(i) << endl;
		}
		cout << "enter the corresponding number to select a topping" << endl;
		cin >> userChoice;

		customerToppings.push_back(defaultToppings.at(userChoice - 1));
		cout << "Any toppings?: (y/n) " << endl;
		cin >> userInput;
	}
	cout << endl << endl;
	for (size_t i = 0; i < customerToppings.size(); i++) {
		cout << customerToppings.at(i) << endl;
	}
	cout << endl;
}
void Pizza::printCustomerTopping()
{
	for (size_t i = 0; i < customerToppings.size(); i++) {
		cout << this->customerToppings.at(i) << endl;
	}
}

void Pizza::getTopping()
{
	for (int i = 0; i < 10; i++) {
		cout << this->defaultToppings.at(i) << endl;
	}
}

Pizza::Pizza() //
{
	this->defaultToppings.resize(10);
	this->defaultToppings.at(0) = "Pepperoni";
	this->defaultToppings.at(1) = "Sausage";
	this->defaultToppings.at(2) = "Chicken";
	this->defaultToppings.at(3) = "Steak";
	this->defaultToppings.at(4) = "Bacon";
	this->defaultToppings.at(5) = "Green Peppers";
	this->defaultToppings.at(6) = "Onions";
	this->defaultToppings.at(7) = "Banana Peppers";
	this->defaultToppings.at(8) = "Olives";
	this->defaultToppings.at(9) = "Spinach";
	totalCost = 0.0;
}
