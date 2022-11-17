#include <bits/stdc++.h>
using namespace std;


class Employee {
private:
	string name;

public:
	Employee(string name) :
			name(name) {
		cout<<"Constructor: "<<name<<"\n";
	}
	~Employee() {
		cout<<"Destructor: "<<name<<"\n";
	}
};

int main() {
	static Employee belal("Belal");
	Employee most("Mostafa");
	if (true){
		Employee ("Mona");   // ??
	}
	static Employee Asmaa("Asmaa");

	return 0;
}
/*
Constructor: Belal
Constructor: Mostafa
Constructor: Mona
Destructor: Mona
Constructor: Asmaa
Destructor: Mostafa
Destructor: Asmaa
Destructor: Belal

scope mona ends after if so it destroied first
mostafa destroy then
now i have 2 static objects (asmaa , belal) (destruction in reverse order)
belal comes first then he will have desroied at the last

*/
