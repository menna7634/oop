

#include <iostream>
using namespace std;
class Luckeynumber {

private:
	int num1;
	int num2;
public:
	void setnumbers(int n1,int n2) {
		num1 = n1;
		num2 = n2;
		
	}
	void PrintAddress() {
		cout << (&Luckeynumber::PrintAddress) << "\n";
		cout <<"Address of "<<num1<<" Is "<< &num1<<"\n";
		cout << "Address of " << num2<< " Is " << &num2<<"\n";

	}
};
int main()
{
	Luckeynumber l1;
	l1.setnumbers(2,77);
	l1.PrintAddress();

}


