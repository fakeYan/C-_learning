//
// Created by Yanpq on 2021/6/21.
//

#ifndef C___LEARNING_MYCOMPLEX_H
#define C___LEARNING_MYCOMPLEX_H

#include <iostream>

class myComplex {
private:
    double re, im;
public:
    myComplex(double r, double i) : re(r), im(i) {
        std::cout << "myComplex(double r, double i)" << std::endl;
    }

    myComplex(double r) : re(r), im(0) {
        std::cout << "myComplex(double r)" << std::endl;

    }

    myComplex() : re(0), im(0) {
        std::cout << "myComplex()" << std::endl;
    }

    myComplex(myComplex &a) : re(a.re), im(a.im) {
        std::cout << "myComplex(myComplex &a)" << std::endl;
    }

    ~myComplex() {
        std::cout << "~myComplex()" << std::endl;
    }

    double real() const { return re; }

    void set_real(double r) { re = r; }

    double imag() const { return im; }

    void set_imag(double i) { im = i; }

    myComplex &operator+=(const myComplex &z) {
        re += z.re, im += z.im;
        return *this;
    }

};

myComplex operator+(myComplex a, myComplex &b) { return a += b; }

#endif //C___LEARNING_MYCOMPLEX_H
