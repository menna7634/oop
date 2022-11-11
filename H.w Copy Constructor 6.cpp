
#include <bits/stdc++.h>
using namespace std;
void print1(string& s) {
    cout<<"Print1 Done"<<"\n";
}
void print2(const string& s) {
    cout<<"Print2 Done"<<"\n";
}

string msg1() {
	string x = "aa";
	return x;
}

const string& msg2() {
	return "aa";
}

const string& msg3() {
	string x = "aa";
	return x;
}
int main() {
	string hello("Hello");

	print1(hello);   // done
	// temporary objects.
    //	print1(string("World"));
	//print1("!");

	// As parameter is const & : any style can be used
	print2(hello); // done
	print2(string("World")); // done
	print2("!"); // done
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	string a1 = msg1();
	// Returned param is temporary. Must receive with & or const &
    //	string &a2 = msg1(); //
	const string &a3 = msg1();

	string a = msg2();
	string b = msg2();
	return 0;
}

