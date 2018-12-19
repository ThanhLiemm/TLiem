#include <iostream>
using namespace std;

class Counter
{
	private:	
		static int count;
        int id;
	public:
		Counter()
		{ this->id = count++; }

	     void PrintID()
		{
		    cout << this->id;
		}
};
int Counter :: count = 1;
int main()
{
	Counter* OB1 = new Counter();
	OB1->PrintID();
	
	Counter* OB2 = new Counter();
	OB2->PrintID();
	
	Counter* OB3 = new Counter();
	OB3->PrintID();
	
	return 0;
}
