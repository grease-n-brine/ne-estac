#ifndef LUENBERGER_OBSERVER_HPP
#pragma once
#define LUENBERGER_OBSERVER_HPP

#include <stdexcept>
#include <vector>

namespace ne_pp::pp {
class LuenbergerObserver {
    private:
    // Systems current state estimate
    std::vector<double> x_hat;
    // Observer gain
    std::vector<std::vector<double>> L;
    // System matrices to model the system dynamics
    std::vector<std::vector<double>> A;
    std::vector<std::vector<double>> C;
    // Input matrix to model the effect of control inputs on the system dynamics
    std::vector<std::vector<double>> B;
          
    public:
};
}
#endif