#include <iostream>
#include "myComplex.h"
using namespace std;
int main() {
    myComplex a(1,1);
    myComplex b(2,2);
    myComplex c;
    c = a + b;
    cout << a.real() << ' ' << a.imag() << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
