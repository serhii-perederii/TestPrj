//
// Created by neko on 03.03.2017.
//

#include "myvector.h"

using namespace test;

double& Vector::operator[] (int i) {
    if (i < 0 || i > sz) {
        throw std::invalid_argument("out of bounds");
    }
    return elem[i];
}
int Vector::size(){
    return sz;
}
double* Vector::begin(){
    return &elem[0];
}
double* Vector::end() {
    return &elem[sz];
}

std::ostream& test::operator<<(std::ostream &os, const Vector &vector) {
    os << "elem: " << vector.elem << " sz: " << vector.sz;
    return os;
}

bool Vector::operator<(const Vector &rhs) const {
    if (elem < rhs.elem)
        return true;
    if (rhs.elem < elem)
        return false;
    return sz < rhs.sz;
}

bool Vector::operator>(const Vector &rhs) const {
    return rhs < *this;
}

bool Vector::operator<=(const Vector &rhs) const {
    return !(rhs < *this);
}

bool Vector::operator>=(const Vector &rhs) const {
    return !(*this < rhs);
}
