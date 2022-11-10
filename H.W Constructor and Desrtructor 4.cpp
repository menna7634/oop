
#include<iostream>
using namespace std;

class Ourprice {
private:
    int price;
public:
    Ourprice(int price) : price(price) { // countructor will be public
        if (price < 10)
            price = 0;
        this->price = price;
    }
    int Getprice() {
        return price;
    }
    /*
        void SetPrice(int price){
        if (price<10)
            price=0;
            this->price=price;

        }
    */
    int SomeFun() {
        int price = 10; // Same name as Data member class name which is not recommended
        int price2 = 20;
        int price3 = 20;

        return price + price2 + price3;
    }

};
// we can delete Setprice and use only constructor because Constructor ignore The condition in Setprice
int main() {

    Ourprice p1(5);
    //p1.SetPrice(80);
    cout << p1.Getprice() << "\n";
    cout << "Total Price = " << p1.SomeFun();
    return 0;
}