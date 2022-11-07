
#include <iostream>
#include<string>
using namespace std;
class invoice {
private:
	string name;
	int itemnumber;
	double price;
	int quantity;


public:
	void setinvoice(string n, int item, double p, int q) {

		name = n;
		itemnumber = item;
		price = p;
		quantity = q;
	}
	double Gettotalprice() {
		return price * quantity;
	}
	void print() {
		cout << "Name : " << name << "\n" << "Item Number : " << itemnumber << "\n";
		cout<<"The Price : " << price << "\n" << "The Quantity : " << quantity << "\n";
	}
	string tostring() {
		string itemm = to_string(itemnumber);
		string pricee = to_string(price);
		string quantityy = to_string(quantity);
		return name+','+ itemm+','+pricee+','+ quantityy;
	}

};

int main() {
	
	invoice v1;
	v1.setinvoice("Laptop", 4353, 18455.5, 2);
	cout<<"The Total Price is "<<v1.Gettotalprice()<<"\n";
	v1.print();
	cout<<v1.tostring();


}

