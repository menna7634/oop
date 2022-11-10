
#include <iostream>
using namespace std;
class A {
private:
	int n;
	int m;
public:
	A(int n, int m) :n(n), m(m) {
		cout << "Class A1 Created :)" << "\n";
	}

	A() {
		cout << "Class A2 Created :)" << "\n";
	}
	~A() {
		cout << "Class A Destroyed :(" << "\n";
	}
};
class B {

public:
	B() {
		cout << "Class B Created :)" << "\n";
	}
	~B() {
		cout << "Class B Destroyed :(" << "\n";
	}
};
class C {

public:
	C() {
		cout << "Class C Created :)" << "\n";
	}
	~C() {
		cout << "Class C Destroyed :(" << "\n";
	}
};
// to check which order Constructor will follow
class Test {
	A a1;
	B b1;
	C c1;
public:
	Test() : b1(B()), a1(A(3, 8)), c1(C()) {
		cout << "Last CLass Created:)" << "\n";

	}
	~Test() {
		cout << "Last Class Destroyed:(" << "\n";
	}

};
int main()
{
	/*
		B b;
		A aa;
		A a(10,3);
		C c;
		*/
	Test t1;
	// so Constructor follow Order of Class data member not initalizer list
	// Last Class Created will be First Class Destroyed
}




