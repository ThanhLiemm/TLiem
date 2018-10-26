#include <iostream>
using namespace std;
void Calculation(float &a , float &b, float &c, float &d);
int main ()
{
	float a,b,c,d;
	Calculation(a,b,c,d);
	return 0;
}
void Calculation(float &a , float &b, float &c, float &d)
{
	cout << "Addition: a/b + c/d = (a*d + b*c) / (b*d)"<< endl;
	cout << "Subtraction: a/b - c/d = (a*d - b*c) / (b*d)"<< endl;
	cout << "Multiplication: a/b * c/d = (a*c) / (b*d)"<< endl;
	cout << "Division: a/b / c/d = (a*d) / (b*c)"<< endl;
	cout << " -----------------------------------------" << endl;
	cout << " -----------------------------------------" << endl;
	char yn;
	char operatorr;
	do
	{
		cout  << " a ,b , operator, c , d: ";
		cin >> a;
		cin >> b;
		cin >> operatorr;
		cin >> c;
		cin >> d;
		switch(operatorr)
		{
		
			case '+':
				{
					cout << " Answer = " <<(a*d + b*c)<< "/" << (b*d)<< endl;
					break;
				}
			case '-':
				{
					cout << " Answer = " <<(a*d - b*c)<< "/"<< (b*d)<< endl;
					break;
				}
			case '*':
				{
					cout << " Answer = " <<(a*c)<< "/"<<  (b*d) << endl;
					break;
				}
			case '/':
				{
					cout << " Answer = " <<(a*d)<<"/"<< (b*c)<< endl;
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
