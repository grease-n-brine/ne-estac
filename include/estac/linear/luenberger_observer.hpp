#pragma once

#include <lattice/matrix.hpp>

namespace ne_pp::estac::linear {

class LuenbergerObserver {
    private:
        using Matrix = ::ne_pp::lattice::Matrix;

        Matrix x_hat_;
        Matrix L_;
        Matrix A_;
        Matrix B_;
        Matrix C_;

    public:
        LuenbergerObserver(
            const Matrix& A,
            const Matrix& B,
            const Matrix& C,
            const Matrix& L,
            const Matrix& x_hat
        ) : A_(A), B_(B), C_(C), L_(L), x_hat_(x_hat) {}
};

} // namespace ne_pp::estac::linear
