

#include <bits/stdc++.h>
using namespace std;
class MyNumber{
private:
    int *val1;
    int val2;
public :
    MyNumber(int x=3 , int y=5){
    val1=new int;
    *val1=x;
    val2=y;

    }
    ~MyNumber(){
    // delete val1;  //delete the dynamically allocated memory, so it's not longer exist in memory to point to it

    }
    void printvalueandaddress(){
    cout<<"Val1: "<<*val1<<" "<<val1<<"\n";
    cout<<"Val2: "<<val2<<" "<<&val2<<"\n";
    }

};
int main () {
MyNumber a;
MyNumber b(10,20);
a.printvalueandaddress();
b.printvalueandaddress();
b=a;
b.printvalueandaddress();

}
