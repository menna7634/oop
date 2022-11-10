#include <bits/stdc++.h>
using namespace std;

class ClassA {
public:
	ClassA() {
		cout << "ClassA Constructor\n";
	}
};

class ClassB {
private:
	//public:
	ClassA aa; // first time
	// once i made object from ClassA inside ClassB , ClassA Constructor Can Be Called
	int x;      
public:

	ClassB() {

	}


	ClassB(int x) {
		this->aa = ClassA(); // second time
		this->x = x;
	}

};
// Class A Constructor will be Called 2 Times
class ClassC {
private:
	int& y;
	ClassB bb;

public:
	ClassC(int& y, const ClassB& bb) : y(y), bb(bb) { // initializer list
		cout << "Class C :)";
	}
};


int main() {
	int hello = 10;
	//ClassB();
	ClassB b(5);
	ClassC cc(hello, b);

	return 0;
}
