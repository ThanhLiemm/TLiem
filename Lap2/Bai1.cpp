#include <iostream>
using namespace std;
struct PhoneNumber
{
	 int area_code;
	 int the_exchange;
	 int the_number;	
} MyPhone,YourPhone;
void Phone();
int main ()
{
	Phone();
	return 0;
}
void Phone()
{
	cout << " Enter your area code, exchange, and number: "	;
	cin >> YourPhone.area_code;
	cin >> YourPhone.the_exchange; 
	cin >> YourPhone.the_number;
	MyPhone.area_code = 212;
	MyPhone.the_exchange = 767;
	MyPhone.the_number = 8900;
	cout << " My Phone is (" << MyPhone.area_code<<") " << MyPhone.the_exchange<<"-" << MyPhone.the_number << endl;
	cout << " Your Phone is (" << YourPhone.area_code<<") " << YourPhone.the_exchange<<"-" << YourPhone.the_number;
};
