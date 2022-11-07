
#include <iostream>
using namespace std;

class Building {

private:
	//apartment Apartments;
	//Elvators elvators;
	int nooffloor;
	int occupancy;

public:


	Building() {   // constructor

		nooffloor = 5;
		occupancy = 20;
	}
	void getbuilding();   // first way of method

};
void Building::getbuilding() {
	cout << nooffloor << " " << occupancy<<"\n";
}
class apartment {   
private:
	//rooms room;
	int bath;
	int doors;
public:
	void setapartment( int b, int d) {     // second way
		
		bath = b;
		doors = d;
	}
	void getapartment() {
		cout  << " number of bath = " << bath << " number of doors = " << doors << "\n";
	}

	
};
class rooms  {
private:
	int bed;
	string colorofbed;
	bool mirror;
public:
	void setroom(int bb, string cc, bool m) {
		bed = bb;
		colorofbed = cc;
		mirror = m;
	}
	void getrooms() {
		cout << "Number of beds = " << bed << " Color of Beds is " << colorofbed << " mirror = " << mirror << "\n";
	}
};
class Bathroom {
private : 
	int area;
public:
	void setbath(int area);                                           // third way

	int getbath() {
		return area;
	}
};
class Elvators {
private:
	int number;
	double speed;
public:
	Elvators() {
		number = 10;
		speed = 12.9;
	}
	void getelvator(int n, int s) {
		cout << "number of Elvators : " << number << " speed = " << speed << "\n";
	}
};


int main()
{
	Building b1;
	b1.getbuilding();


	apartment a1;
	a1.setapartment(2, 8);
	a1.getapartment();

	rooms r1;
	r1.setroom(1, "Red", 1);
	r1.getrooms();
}