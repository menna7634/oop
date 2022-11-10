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
	ClassA aa;  //  ßÏÉ ÇáÌãáÉ ãÊÇÍÉ ÇäåÇ ÊÊØÈÚ B ÌæÇ A ãÌÑÏ ãÇ ÚãáÊ ÇÈæÌíßÊ  ãä
	int x;      // first time
public:

	ClassB() {

	}


	ClassB(int x) {
		this->aa = ClassA(); // second time
		this->x = x;
	}

};
// Class A will be Called 2 Times
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
