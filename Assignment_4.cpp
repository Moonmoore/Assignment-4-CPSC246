/* This project has been created by Moon Moore, Brayden Lloyd, Matt Kernan, and Hailey McLaughin
Date: 10/18/17
The purpose of this assignment is to create POS program that enables a trained employee to take pizza orders,
as well as keep track of profit and the amount of all denominations of money in the register.
*Add copyright etc.*
*/

#include cstdlib;
#include vector;
#include cstring;

public class Pizza
{
  private:
    int sizeSmall;
    int sizeMed;
    int sizeLar;
    double costSmall;
    double costMed;
    double cost Lar;
    double toppingSmallMed;
    double toppingLarge;
    double totalCost;
  public:
    void setSize(int);
    int getSize();
    void setCost();
    double getCost();
    void setTopping(int);
    int getTopping();
    Pizza(int, int);
}

public class Register
{
  private:
    double penny;
    double nickle;
    double dime;
    double quarter;
    double dollar;
    double five;
    double ten;
    double payment;
    double profit;
  public:
    void setProfit(double);
    double getProfit();
    void setCost(int, int);
    double getCost();
    void setPayment();
    void printEverything();
}

int main()
{
  
  return 0;
}
