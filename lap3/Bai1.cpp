#include<iostream>
using namespace std;
class time{
	private :
		int hour;
		int minute;
		int sec;
	public :
		time(){
			this->hour=0;
			this->minute=0;
			this->sec=0;	
		}
		time(int hour,int minute,int sec){
			this->hour=hour;
			this-> minute=minute;
			this->sec=sec;
		}
		void display(){
			int minute=this->minute;
			int hour=this->hour;
			int sec=this->sec;
			if(sec>=60){
				int i=sec/60;
				minute+=i;
			}
			if(minute>=60){
				int i=minute/60;
				hour+=i;
			}
			hour=hour%12;
			minute=minute%60;
			sec=sec%60;
			cout<<hour<<":"<<minute<<":"<<sec<<endl;
		}
		
};
int main(){
	time t1(1,1,1);
	time t2(0,59,67);
	t2.display();
	//time t3;
	//t3=t1+t2;
	//t3.display();
}
