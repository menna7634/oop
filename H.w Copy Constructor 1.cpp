//1

#include <bits/stdc++.h>
using namespace std;
class Test{
private :
    int n;
    Test(int n){
    cout<<"Iam Not Visible :(";
    }

};
int main () {
Test t1(5);  // can't make object using this Constructor (Which Cause Compiler Error) if Constructor were in private section
}
/*
//2

//if a copy constructor is made private,objects of the class can’t be copied


//3
--using &
 3-If a copy constructor could take its parameter by value, then you would need a copy constructor to pass it its parameter
, which would cause an endless loop
not using & cause Compiler Error

//4
-- using const
Copy constructors should not modify the object it is copying from

*/
