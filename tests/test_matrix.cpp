#include "../include/matrix.h"
#include "../include/random.h"

int main (int argc, char *argv[]) {
    Random<double> r(-1, 1);

    Matrix<double> A(3, 3);
    r.fillMatrix(A);

    Matrix<double> B(3, 3);
    r.fillMatrix(B);

    // commutativity test
    assert(A + B == B + A);

    Matrix<double> Z(3, 3); // Matrix with all elements equals to 0

    // Identity element
    assert(A == A + Z);

    // scalar multiplication
    assert(A * 0 == Z);
    assert(A * 1 == Z);

    return 0;
}
