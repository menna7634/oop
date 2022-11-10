#include <bits/stdc++.h>
using namespace std;
class A {
private:
    int *x;
public:
    A() {
        cout << "A Constructor" << "\n";
        x = new int;
        *x = 10;
    }
    ~A() {
        cout << "A Destructor" << "\n";
        delete x; // delete it
    }
};
int main() {
    A* a = new A();

}
