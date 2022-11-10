

#include <iostream>
using namespace std;
class A {

};
class B {

};
class C {

};
class D {
private:
    A aa;
    B bb;
    C cc;
public:
    D(const A& a, const B& b, const C& c) : aa(a), bb(b), cc(c) {
        // const -- so he can't change the paramter
        // & -- so he doesn't take extra memory
    }
};
int main() {
    D d(const A & a, const B & b, const C & c);
}
