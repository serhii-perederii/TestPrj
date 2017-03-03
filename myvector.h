//
// Created by neko on 03.03.2017.
//

#ifndef TESTPRJ_VECTOR_H
#define TESTPRJ_VECTOR_H

#include <iostream>

namespace test{
    class Vector{
    public:
        Vector(int s) : elem{new double[s]}, sz{s} {}
        double& operator[] (int i);
        int size();
        double* begin();
        double* end();

        friend std::ostream& operator<<(std::ostream &os, const Vector &vector);

        bool operator<(const Vector &rhs) const;

        bool operator>(const Vector &rhs) const;

        bool operator<=(const Vector &rhs) const;

        bool operator>=(const Vector &rhs) const;

    private:
        double* elem;
        int sz;
    };

    std::ostream& operator<<(std::ostream &os, const Vector &vector);

}



#endif //TESTPRJ_VECTOR_H
