#include <iostream>
#include <string>
using namespace std;
void Calculation(float &a, float &b);
int main()
{
	float a,b;
	
	Calculation(a,b);
}
void Calculation(float &a, float &b)
{	char yn;
	char operatorr;
	do
	{
		cout  << " Enter first number, operator, second number: ";
		cin >> a;
		cin >> operatorr;
		cin >> b;
		switch(operatorr)
		{
		
			case '-':
				{
						cout << " Answer = " <<a-b << endl;
					break;
				}
			case '+':
				{
					cout << " Answer = " <<a+b<< endl;
					break;
				}
			case '*':
				{
					cout << " Answer = " <<a*b << endl;
					break;
				}
			case '/':
				{
					cout << " Answer = " <<a/b << endl;
					break;
				}
				default:
					cout << " khong hop le "<< endl;
					break;
		
			
		};
		cout << "Do another (y/n)?";	
		cin>> yn;
		if(yn == 'n' )
		break;
	
		
		
	}
	while(1);
}

