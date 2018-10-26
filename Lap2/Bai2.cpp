#include<iostream>
#include<math.h>
using namespace std;
float Calculate(float &amount,float &years,float &rate);
int main()
{
	float amount;
	float years;
	float rate;	
	cout<< "At the end of " << years << " ,you will have " << Calculate(amount,years,rate) << " dollars ";
}
float Calculate(float &amount,float &years,float &rate)
{
	cout << "Enter initial amount: ";
	cin >> amount ;
	cout << "Enter number of years: ";
	cin >> years ;
	cout << "Enter interest rate (percent per year): ";
	cin >> rate ;
	
	return amount*pow((rate/100)+1,years);
}
