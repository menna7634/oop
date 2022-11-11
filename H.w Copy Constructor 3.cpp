

#include <bits/stdc++.h>
using namespace std;


class ClassA {
private:
	int *val;
public:
	ClassA(int v) {
		val = new int;
		*val = v;
	}
	~ClassA() {
		delete val;
		val = NULL;
	}

	const int* GetVal() {			// adding const here prevents from wrong usage so when i run the program i got
	                                // compiler error
		return val;
	}

	void SetVal(int* val) {
		this->val = val;
	}
};

int main() {
	ClassA a1(10);
	ClassA a2(20);
	cout<<a1.GetVal()<<"\n";    // return address
	a2.SetVal(a1.GetVal());     // compile error

 //by removing const and try to run again a2 and a1 will have same address
          return 0;
}
